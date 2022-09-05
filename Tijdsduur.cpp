#include <iostream>
#include "Tijdsduur.h"

using namespace std;


Tijdsduur::Tijdsduur():min(0),sec(0){

}

Tijdsduur::Tijdsduur(int s):min(0),sec(s){

}

Tijdsduur::Tijdsduur(int m, int s): min(m),sec(s){

}

void Tijdsduur::eraf(const Tijdsduur &t) {
    int seconden = 60*min+sec -(t.min*60+t.sec);
	sec = seconden;min=0;
    if(sec<0) sec=0;
    normaliseer();
}


void Tijdsduur::erbij(const Tijdsduur &t) {
	sec += t.sec;
    min+=t.min;
    normaliseer();
}


void Tijdsduur::normaliseer(){
	if(sec > 59){
		min = min + sec/60;
		sec = sec%(60);
	}
	while(sec < 0){
		sec = 60 + sec;
	    min = min-1;
	}
}


void Tijdsduur::print() const{
	int minuut = (sec/60);
	int seconden = (sec%60);
	if (min > 0){
		cout << minuut << " minuten en " << seconden << " seconden";
	}
	else
		cout << minuut << " seconden";
}

void Tijdsduur::maal(int t){
    int seconden=60*min+sec;
	seconden *=t;

	normaliseer();
}

unsigned int Tijdsduur::deTimertijd()const {

	return 60*min+sec;
}
