#ifndef TIJDSDUUR_H
#define TIJDSDUUR_H

// De declaratie van de ADT Tijdsduur:
class Tijdsduur {
public:
//...
	Tijdsduur();
	Tijdsduur(int m);
	Tijdsduur(int u, int m);
    void eraf(const Tijdsduur& t);
    void erbij(const Tijdsduur& t);
    void maal(int t);
    void print() const;
    unsigned int deTimertijd()const;

//...

private:	
    void normaliseer();
    int sec;
    int min;
    //int uur;
//...
};

#endif // TIJDSDUUR_H
