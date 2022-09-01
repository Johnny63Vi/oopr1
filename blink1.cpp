#include <iostream>
#include <unistd.h>

using namespace std;

#include "Led.h"

#define TIMELEDON 1000
#define TIMELEDOFF 500

int main (void)
{
  cout<<"hoi opgave1"<<endl;
  wiringPiSetupGpio();  //moet worden aangeroepen 
  Led ld(18);

  for (;;)
  {
    ld.zetAan();
    usleep(1000000);
    ld.zetUit();
    usleep(500000);
  }
  return 0 ;
}
