#include <iostream>
#include <string>
#include "Samochody.h"
using namespace std;

    Samochody::Samochody()
    {

    }
    Samochody::~Samochody()
    {

    }
    Samochody::Samochody(string marka,string model,int rok, float pojemnosc)
    {
    marka="Renault";
    model="Clio";
    rok='2001';
    pojemnosc='1149';
    }

void Samochody::save(string mar,string mod,int ro,float poj)
    {
        marka=mar;
        model=mod;
        rok = ro;
        pojemnosc = poj;
    }
void Samochody::read(string marka,string model,int rok,float pojemnosc)
    {
        cout<<"\nMarka: "<<marka<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Rok: "<<rok<<endl;
        cout<<"Pojemnosc: "<<pojemnosc<<endl;
    }

