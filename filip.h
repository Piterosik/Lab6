#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class filip
{
	private:
		string imie;
		string nazwisko;
		string pesel;
		string kodpocztowy;
		string adres;
		string ulica;
		string miasto;
		int wiek;
	public:
		filip();
		~filip();
		void setImie(string i);
		string getImie();
		void setNazwisko(string n);
		string getNazwisko();
		void setPesel(string p);
		string getPesel();
		void setKodp(string k);
		string getKodp();
		void setAdres(string a);
		string getAdres();
		void setUlica(string u);
		string getUlica();
		void setMiasto(string m);
		string getMiasto();
}

filip::filip()
{

}

void filip::setImie(string i)
{
	imie = i;
}

string filip::getImie()
{
	return imie;
}

void filip::setNazwisko(string n)
{
	nazwisko = n;
}

string filip::getNazwisko()
{
	return nazwisko;
}

void filip::setPesel(string p)
{
	pesel = p;
}

string filip::getPesel()
{
	return pesel;
}

void filip::setKodp(string k)
{
	kodpocztowy = k;
}

string filip::getKodp()
{
	return kodpocztowy;
}

void filip::setAdres(string a)
{
	adres = a;
}

string filip::getAdres()
{
	return adres;
}

void filip::setUlica(string u)
{
	ulica = u;
}

string filip::getUlica()
{
	return ulica;
}

void filip::setMiasto(string m)
{
	miasto = m;
}

string filip::getMiasto()
{
	return miasto;
}
