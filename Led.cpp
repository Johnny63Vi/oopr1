#include "Led.h"
#include "gpiofuncties.h"

Led::Led(int n): pinNr(n),status(0)
{
    pinMode(pinNr,OUTPUT);
    
}


Led::~Led()
{
}

void Led::zetAan() {
    digitalWrite (pinNr,1);
    status=1;
}

int Led::isLedAan()const {
    return status;
}

void Led::zetUit() {
     digitalWrite (pinNr,0);
     status=0;
}
string  Led::ledKleur()const {
  return kleur;        
}

int Led::pinNummer() const {
    return pinNr;
}


