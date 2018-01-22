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

/*****************SET***********/
 std::string Statek::getNazwa()
 {
     return _nazwa;
 }

 std::string Statek::getModel()
 {
     return _model;
 }
