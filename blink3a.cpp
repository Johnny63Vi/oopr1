#include <iostream>
#include <unistd.h>
#include <wiringPi.h>

using namespace std;

#include "Logled.h"
#include "RaspberryPi.h"

#define TIMELEDON  3000000
#define TIMELEDON2 2000000
#define TIMELEDOFF 2000000

int main (void)
{
  cout<<"hoi opgave2"<<endl;
 
 /* 
    De raspberry pi wordt gebruikt om de pinnen aan te sturen.
 */

  RaspberryPi miniC(123456); //vul hier je eigen studienummer in.

/*
 De Logled logld1 wordt aangesloten op pin18 en heeft
 als eigenaar Pietje Puk en een maximale brandtijd van 4 seconden.
 Bij logld2 is de eigenaar anoniem en heeft een maximale brandtijd van 2 seconden.
*/ 


  Logled logld1(&miniC,18, "Rood", "Pietje Puk",4);

  cout<<"De eigenaar van ld1="<<logld1.deEigenaar()<<endl;
  

    logld1.zetAan();
    usleep(TIMELEDON);
    logld1.zetUit();
    usleep(TIMELEDOFF);
    logld1.zetAan();
    usleep(TIMELEDON2);
    logld1.zetUit();
    return 0 ;
}
