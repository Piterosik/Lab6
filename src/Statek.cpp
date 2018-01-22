#include "Statek.h"

Statek::Statek()
{
    //ctor
}

Statek::~Statek()
{
    //dtor
}

void Statek::Start()
{
    setNazwa("Stateczek123");

    std::cout << "To jest statek.\n";
    std::cout << "Jest bardzo duzy, ma az: " << getSize() " m!!" << endl;
    std::cout << "A jego nazwa to: " << getNazwa() << "!!" << endl;

}

/*****************GET*************/

void Statek::setNazwa(std::string n)
{
    _nazwa = n;
}

void Statek::setModel(std::string m)
{
    _model = m;
}

void Statek::setSize(int s)
{
    _dlugosc = s;
}
/*****************SET***********/
 std::string Statek::getNazwa()
 {
     return _nazwa;
 }

 std::string Statek::getModel()
 {
     return _model;
 }

 int Statek::getSize()
 {
     return _dlugosc;
 }
