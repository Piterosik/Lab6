#ifndef STATEK_H
#define STATEK_H

#include <string>
#include

class Statek
{
    private:
        std::string _nazwa, _model;
        int _dlugosc;
    public:
        Statek();
        virtual ~Statek();
        void Start();

        void setNazwa(std::string n);
        void setModel(std::string m);
        void setSize(int s);

        std::string getNazwa();
        std::string getModel();
        int getSize();

};

#endif // STATEK_H
