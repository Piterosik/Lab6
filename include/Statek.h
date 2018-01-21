#ifndef STATEK_H
#define STATEK_H

#include <string>

class Statek
{
    private:
        std::string _nazwa, _model;
    public:
        Statek();
        virtual ~Statek();
        void Start();

        void setNazwa(std::string n);
        void setModel(std::string m);

        std::string getNazwa();
        std::string getModel();

};

#endif // STATEK_H
