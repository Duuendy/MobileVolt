#include "config.h"
#define Lampada1 D1


AdafruitIO_Feed *feedLampada1 = io.feed("Lampada1");


void setup() {

  pinMode(Lampada1,OUTPUT); 
  Serial.begin(115200);
  while(! Serial);
  conectaBroker();

}

void loop() {

  byte state = io.run();
  if(state == AIO_NET_DISCONNECTED | state == AIO_DISCONNECTED){
    conectaBroker();
  }
  
}

void handleL1(AdafruitIO_Data *data) {

  Serial.print("Recebido  <- ");
  Serial.print(data->feedName());
  Serial.print(" : ");
  Serial.println(data->value());

  if(data->isTrue())
    digitalWrite(Lampada1, HIGH);
  else
    digitalWrite(Lampada1, LOW);
}


void conectaBroker(){
  
  Serial.print("Conectando ao Adafruit IO");

  io.connect();

  feedLampada1->onMessage(handleL1);

  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println(io.statusText());

  feedLampada1->get();
}
