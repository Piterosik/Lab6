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
