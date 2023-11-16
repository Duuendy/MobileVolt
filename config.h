/************************ Configurações do Adafruit IO *******************************/

//Insira seu nome de usuário e chave. 
//sua conta no Adafruit IO
#define IO_USERNAME "Duuendy"
#define IO_KEY "aio_zvFF07KZsjG3VZQxd44ABOUls5Ey"

/********************* Configuração do WIFI **************************************/

//Insira o SSID e Senha da rede WIFI a qual você irá conectar

#define WIFI_SSID "essa nao e a sua wifi cima"
#define WIFI_PASS "1234567890a"


/***************Configurações do comunicaçaão************/
#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
