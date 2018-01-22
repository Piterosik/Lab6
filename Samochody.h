#include <iostream>
#include <string>

using namespace std;

class Samochody
{
public:
    void start()
    {
    cout<<"\nWitam. Wywolane metoda start. \n"<<endl;
    }
    Samochody();
    Samochody(string marka,string model,int rok, float pojemnosc);
    ~Samochody();
    void save(string marka,string model,int rok, float pojemnosc);
    void read(string marka,string model,int rok, float pojemnosc);
private:
    string marka,model;
    int rok;
	float pojemnosc;

};
