#ifndef LED_H
#define LED_H

#include <string>

using namespace std;
#pragma once

#define OUTPUT 1

class Led
{
  public:
    Led(int);
    ~Led();
    void zetAan();
    void zetUit();
    string ledKleur()const;
    int isLedAan()const;
    int pinNummer() const;

  private:
    string kleur;
    int pinNr=-1;
    int status=0;  
};
#endif