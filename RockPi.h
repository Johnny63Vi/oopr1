#ifndef RockPi_H
#define RockPi_H

#pragma once

#include "RockPiPin.h"

#define AANTALPINNEN 4
class RockPi
{
  public:
    RockPi(int);
    ~RockPi();
    void zetPinMode(int,int );
    void pinWaarde(int, int );
    bool koppelAansluiting(int);
    int hetProductienummer() const;
    
  private:
    int productienummer;
    RockPiPin pinnen[AANTALPINNEN];
   
};

#endif
