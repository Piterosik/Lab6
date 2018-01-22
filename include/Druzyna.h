#ifndef DRUZYNA_H_INCLUDED
#define DRUZYNA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Druzyna
{
public:
    short wynikiWlasne[3];
    short wynikiPrzeciwnikow[3];
    void policzWynik();
    void podajWynikiMecz�w();
    void podajLiczbeZawodnikow();
    void Start();
    void podajNazwe();
private:
    short wynik;
    short liczbaZawodnikow;
    string nazwa;
};

#endif // DRUZYNA_H_INCLUDED
