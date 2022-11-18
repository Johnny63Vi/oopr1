#include "RockPi.h"
#include "gpiofuncties.h"

RockPi::RockPi(int nr):productienummer(nr)
{
  
}

RockPi::~RockPi()
{

}

//Test eerst of de pin aanwezig is.
void RockPi::zetPinMode(int nr,int m) {
    for(int i=0; i < AANTALPINNEN;++i) {
         if(pinnen[i].gpioPin()==0) {
              pinMode(nr,m);
             
         }
    }
}

void RockPi::pinWaarde(int nr,int x) {
    digitalWrite(nr,x);
}

 bool RockPi::koppelAansluiting(int nr) {
    bool alAanwezig=false;
    for(int i=0; i < AANTALPINNEN;++i) {
        if(pinnen[i].gpioPin()==nr)
               return 0;  //pin is al bezet
    }

    //pin is niet aanwezig.
    for(int i=0; i < AANTALPINNEN;++i) {
       if(pinnen[i].gpioPin() == 0) { // pin=vrij
            pinnen[i].gpioNr(nr);
                  return true;
                }
            }
    return 0;
   }

   int  RockPi::hetProductienummer() const {
        return productienummer;
   }
