#include <iostream>
#include <iomanip>
#include "tijdsduur.h"

using namespace std;

// De definities van de memberfunctie van de ADT Tijdsduur, oftewel: de implementatie van de ADT Tijdsduur:


void Tijdsduur::eraf(const Tijdsduur &t) {
    sec -= t.sec;
   //.....
}
