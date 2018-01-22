#include <iostream>
#include <string>
#include "Samochody.h"

using namespace std;


int main()
{
    string mar, mod;
	int ro;
	float poj;
    Samochody s1;
    Samochody s2;

    s1.read(mar,mod,ro,poj);

    cout << "\nWitaj! \nPodaj marke auta: ";
    cin>>mar;
    cout<<"Podaj model: ";
    cin>>mod;
    cout<<"Podaj rok auta: ";
    cin>>ro;
    cout<<"Podaj pojemnosc(ccm): ";
    cin>>poj;
    s1.start();
    s2.save(mar,mod,ro,poj);
    s2.read(mar,mod,ro,poj);


    return 0;
}
