#include "RockPiPin.h"
#include "gpiofuncties.h"

#define OUTPUT 1

RockPiPin::RockPiPin(int r,int p):richting(r),pinNr(p),status(0)
{
   
   pinMode(pinNr,richting);

}

RockPiPin::RockPiPin():pinNr(0),status(0)
{

}


RockPiPin::~RockPiPin()
{

}

void RockPiPin::waardePin(int x) {
       if(richting == OUTPUT)
           digitalWrite (pinNr,x);
}

void RockPiPin::zetInMode(int m) {
                richting=m;
                pinMode(pinNr,m);

}

int RockPiPin::leesPinWaarde() const {
       return digitalRead(pinNr);
}


int RockPiPin::gpioPin()const {
       return pinNr;
}

void RockPiPin::gpioNr(int n) {
       pinNr=n;
}
