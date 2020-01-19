/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\
            data realTimeService httpserver_data.h
\*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
//  #include "httpserver_data.h"

for ( int i = first ; i < last ; i++)
  {
   emon1.calcVI(8,8);// Calculate all. No.of half wavelengths (crossings), time-out
    
   digitalWrite(S0, (i >> 0) & 0x01);
   digitalWrite(S1, (i >> 1) & 0x01);
   digitalWrite(S2, (i >> 2) & 0x01);
   digitalWrite(S3, (i >> 3) & 0x01);
   
    reqClient.print(F("\""));
    reqClient.print(i+1);
    reqClient.println(F("\": {"));

    reqClient.print(F("\t\"Irms\":"));
    reqClient.print(emon1.Irms);
    
    reqClient.println(F(","));
    reqClient.print("\t\"Vrms\":");
    reqClient.print(emon1.Vrms);
    
    reqClient.println(F(","));
    reqClient.print(F("\t\"realPower\":"));
    reqClient.println(emon1.realPower);
    
    reqClient.print("\t}");
    
    if (i < last - 1) {
      reqClient.println(F(","));
    }
    else {
    reqClient.println();      
    }     
 }

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
