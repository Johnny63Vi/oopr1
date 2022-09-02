#include <iostream>
#include <unistd.h>
#include <wiringPi.h>

using namespace std;

#include "Led.h"

#define TIMELEDON 1000000
#define TIMELEDOFF 500000

int main (void)
{
  cout<<"hoi opgave1"<<endl;
  wiringPiSetupGpio();  //moet worden aangeroepen 
  Led ld(18);

  for (;;)
  {
    ld.zetAan();
    usleep(TIMELEDON);
    ld.zetUit();
    usleep(TIMELEDOFF);
  }
  return 0 ;
}
