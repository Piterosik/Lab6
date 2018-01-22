#include "Druzyna.h"

Druzyna::Druzyna(){//konstruktor
}
Druzyna::Druzyna(){ //destruktor
}

void Druzyna::Start()
{

}

void Druzyna::podajLiczbeZawodnikow(short zawodnicy)
{
    _liczbaZawodnikow=zawodnicy;
}

void Druzyna::policzWynik()
{
    _wynik=0
    for (int i=0; i<3; i++)
    {
        if (_wynikiWlasne[i]>_wynikiPrzeciwników[i])
            _wynik+=3;
        else if (_wynikiWlasne[i]==_wynikiPrzeciwników[i])
            _wynik+=1;
        else
            _wynik+=0;
    }
}
