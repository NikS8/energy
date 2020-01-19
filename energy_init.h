/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\
            settings energy
\*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
//	#include "energy_init.h"

//	Блок httpServer	-----------------------------------------------------------

byte mac[] = {0xCA, 0x74, 0x10, 0x10, 0x10, 0x10};
IPAddress ip(192, 168, 1, 110);
EthernetServer httpServer(40110);

//  Блок Energy Monitor  ------------------------------------------------------
  
EnergyMonitor emon1;

//  Блок hc4067  --------------------------------------------------------------

#define EN 3  //  Выбор  мультиплексора
#define S0 4  //  Цифровые сигналы управления
#define S1 5
#define S2 6
#define S3 7 
#define SIG A1  //  Выход  мультиплексора

#define first 0  //  номер первого подключенного канала
#define last 15  //  номер последнего подключенного канала

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
