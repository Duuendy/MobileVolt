# MobileVolt
Projeto de IoT desenvolvido para o curso de ADS solicitado pela universidade Presbiteriana Mackenzie, onde temos um aplicativo que aciona objetos eletrônicos conectados a internet.  

O desenvolvimento do projeto envolvendo o controle remoto de dispositivos elétricos utilizando o módulo relé NodeMCU Wi-Fi ESP8266, e a comunicação via MQTT através do servidor Adafruit.IO foi desafiador e envolvente. Aqui está um relato detalhado do processo:

Utilização dos Materiais e Ferramentas:

Montagem dos Componentes: Inicialmente, foi realizada a conexão entre o módulo relé NodeMCU e os dispositivos elétricos (como lâmpada) por meio de um soquete. As ferramentas como a chave de fenda, alicate e fita isolante foram cruciais para montar as conexões de forma segura.

Programação e Desenvolvimento: Utilizou-se a IDE Arduino para programar o NodeMCU, configurando-o para se conectar à rede Wi-Fi e estabelecer a comunicação MQTT com o servidor Adafruit.IO. Também foi desenvolvida uma página HTML para controlar o sistema de forma remota, permitindo aos usuários ligar e desligar os dispositivos.

Desafios Encontrados:

Configuração de Comunicação: Configurar a comunicação MQTT entre o módulo NodeMCU e o servidor Adafruit.IO foi um dos principais desafios. Foram necessárias várias iterações para garantir a correta publicação e subscrição de tópicos para controlar o módulo relé.

Integração da Página HTML: Integrar a página HTML para interação remota com o sistema também foi desafiador. A sincronização entre os comandos enviados pela página HTML e a interpretação correta pelo ESP01 demandou ajustes constantes.

Propostas de Melhorias:

Interface do Usuário Aprimorada: A página HTML poderia ser melhorada com uma interface mais intuitiva e elementos visuais mais atrativos para tornar a experiência do usuário mais amigável.

Aprimoramento na Confiabilidade: Investir em mecanismos de verificação e estabilidade na comunicação, garantindo uma conexão confiável entre o módulo NodeMCU e o servidor MQTT, poderia ser uma melhoria significativa.

Implementação de Mais Funcionalidades: Explorar a possibilidade de adicionar funcionalidades avançadas, como agendamento de tarefas, criação de grupos de dispositivos, entre outros recursos, poderia tornar o sistema mais versátil.

Em resumo, o desenvolvimento do projeto exigiu uma combinação de habilidades técnicas, como programação, montagem de circuitos e entendimento dos protocolos de comunicação. Os desafios enfrentados durante o processo proporcionaram valiosos aprendizados, e as propostas de melhorias indicam caminhos para o aprimoramento do sistema, visando oferecer maior funcionalidade, confiabilidade e facilidade de uso aos usuários.
