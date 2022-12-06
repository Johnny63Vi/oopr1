#include <iostream>
#include <unistd.h>

using namespace std;

#include "Led.h"

#define TIMELEDON 1000000
#define TIMELEDOFF 500000

int main() {

    cout<<"hoi opgave1"<<endl;
    Led ld(134);

  for (;;)
  {
    ld.zetAan();
    usleep(TIMELEDON);
    ld.zetUit();
    usleep(TIMELEDOFF);
  }

    return 0;
}