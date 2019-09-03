#include <iostream>

#include"Pawell641.h"
#include "filip.h"
#include "Statek.h"
#include "Druzyna.h"


using namespace std;

int main()
{
    pawel osoba;
    osoba.start();

    cout << "Hello world!" << endl;
    filip dane_personalne;
    dane_personalne.start();

    Statek statek;
    statek.Start();
    
    Druzyna druzyna;
    druzyna.Start();


    return 0;
}
