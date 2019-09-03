#include "Druzyna.h"

void Druzyna::podajLiczbeZawodnikow()
{
    short zawodnicy;
    cout << "Podaj liczbe zawodnikow!" << endl;
    cin >> zawodnicy;
    liczbaZawodnikow=zawodnicy;
}

void Druzyna::policzWynik()
{
    wynik=0;
    for (int j=0; j<3; j++)
    {
        if (wynikiWlasne[j]>wynikiPrzeciwnikow[j])
            wynik+=3;
        else if (wynikiWlasne[j]==wynikiPrzeciwnikow[j])
            wynik+=1;
        else
            wynik+=0;
    }
}
void Druzyna::podajWynikiMeczow()
{
    for (int i=0; i<3; i++)
    {
        cout << "Podaj wyniki " << i+1 << ". meczu!" << endl;
        cout << "Wynik druzyny: ";
        cin >> wynikiWlasne[i];
        cout << endl;
        cout << "Wynik przeciwnika: ";
        cin >> wynikiPrzeciwnikow[i];
        cout << endl;
    }
}

void Druzyna::podajNazwe()
{
    string wpisz;
    cout << "Podaj nazwe druzyny!" << endl;
    cin >> wpisz;
    nazwa=wpisz;
}

void Druzyna::Start()
{
    Druzyna::podajNazwe();
    Druzyna::podajLiczbeZawodnikow();
    Druzyna::podajWynikiMeczow();
    Druzyna::policzWynik();
    cout << "Nazwa druzyny: " << nazwa << endl;
    cout << "Wynik " << nazwa << " " << wynik << endl;
    cout << "W druzynie " << nazwa << " gra " << liczbaZawodnikow << " zawodnikow" << endl;
}
