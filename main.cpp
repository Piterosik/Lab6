#include <iostream>
#include <string>

using namespace std;

class Samochody
{
public:
    void start()
    {
    cout<<"Witam. Wywolane metoda start. "<<endl;
    }
    Samochody();
    ~Samochody();
    void save(string marka,string model,int rok, float pojemnosc);
private:
    string marka,model;
    int rok;
	float pojemnosc;

};

    Samochody::Samochody()
    {

    }
    Samochody::~Samochody()
    {

    }

   void Samochody::save(string mar,string mod,int ro,float poj)
    {
        marka=mar;
        model=mod;
        rok = ro;
        pojemnosc = poj;
    }

int main()
{
    string mar, mod;
	int ro;
	float poj;
    Samochody s1;
    Samochody s2;
    cout << "Hello world!" << endl;
    s1.start();
    s2.save(mar,mod,ro,poj);


    return 0;
}
