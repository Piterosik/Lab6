#include "Druzyna.h"

Druzyna::Druzyna(){//konstruktor
}
Druzyna::Druzyna(){ //destruktor
}

void Druzyna::Start()
{
    cout << "Nazwa druzyny: " << _nazwa << endl;
    cout << "Wynik " << _nazwa << " " << _wynik << endl;
    cout << "W druzynie " << _nazwa << " gra " << _liczbaZawodnikow << "zawodnikow" << endl;
}

void Druzyna::podajLiczbeZawodnikow()
{
    short zawodnicy;
    cout << "Podaj liczbe zawodnikow!" << endl;
    cin >> nazwa;
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

void Druzyna::podajNazwe()
{
    string nazwa;
    cout << "Podaj nazwe druzyny!" << endl;
    getline(cin.nazwa);
    _nazwa=nazwa;
}
