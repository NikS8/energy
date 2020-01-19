/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\
            realTimeService
\*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void realTimeService() {

  EthernetClient reqClient = httpServer.available();
  if (!reqClient) return;

  while (reqClient.available()) reqClient.read();

  reqClient.println(F("HTTP/1.1 200 OK"));
  reqClient.println(F("Content-Type: application/json"));
  reqClient.println();

  reqClient.println(F("{"));
  reqClient.print(F("\"ATmega168\":"));
  reqClient.println("\"16kB\",");
//  reqClient.println(F(","));
  reqClient.print(F("\"deviceId\":\"")); 
  reqClient.print(DEVICE_ID);
 
  reqClient.println(F("\","));
  reqClient.println(F("\"data\": {"));

  #include "httpserver_data.h"    //  Данные от мультиплексора

  reqClient.print("\t}");
  
  reqClient.println(F(","));
  reqClient.print(F("\"freeRam\":"));
  reqClient.println(freeRam());
  
  reqClient.println(F("}"));

  reqClient.stop();
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
