#include <iostream>
#include <iomanip>
#include "tijdsduur.h"

using namespace std;

// De definities van de memberfunctie van de ADT Tijdsduur, oftewel: de implementatie van de ADT Tijdsduur:



Tijdsduur::Tijdsduur():min(0),sec(0){

}

Tijdsduur::Tijdsduur(int s):sec(s),min(0){
	normaliseer();
}

Tijdsduur::Tijdsduur(int m, int s): min(m),sec(s){
	normaliseer();

}

void Tijdsduur::eraf(const Tijdsduur &t) {
	sec -= t.sec;
    min-=t.min;
    normaliseer();
}

void Tijdsduur::erbij(const Tijdsduur &t) {
	sec += t.sec;
    min+=t.min;
    normaliseer();
}


void Tijdsduur::normaliseer(){
	unsigned int t = min * 60 + sec;
	sec = t % 60;
	min = t / 60;
}


void Tijdsduur::print() const{
	int uur = (min/60);
	int minuut = (min%60);
	if (min> 0){
		cout <<std::setw(3)<< min << " minuten en " <<std::setw(3)<< sec << " seconden";
	}
	else
		cout <<std::setw(18)<< sec << " seconden";
}

void Tijdsduur::maal(int t){
	min = min*t;
	sec = sec*t;
	normaliseer();
}

int Tijdsduur::deTimerTijd()const {
	return min* 60 + sec;
}
