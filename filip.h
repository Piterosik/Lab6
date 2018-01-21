#include <iostream>

using namespace std;

class filip
{
	private:
		string imie;
		string nazwisko;
		string pesel;
		int wiek;
	public:
		filip();
		~filip();
		void setImie(string i);
		string getImie();
		void setNazwisko(string n);
		string getNazwisko();
		void setPesel(string p);
		string getPesel());
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

