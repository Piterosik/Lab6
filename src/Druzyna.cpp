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
        if (_wynikiWlasne[i]>_wynikiPrzeciwnikow[i])
            _wynik+=3;
        else if (_wynikiWlasne[i]==_wynikiPrzeciwnikow[i])
            _wynik+=1;
        else
            _wynik+=0;
    }
}

void Druzyna::podajWynikiMeczów()
{
    for (int i=0; i<3; i++)
    {
        cout << "Podaj wyniki " << i+1 << ". meczu!" << endl;
        cout << "Wynik druzyny: ";
        cin >> _wynikiW³asne[i];
        cout << endl;
        cout << "Wynik przeciwnikow: ";
        cin >> _wynikiPrzeciwnik[i];
        cout << endl;
    }
}
