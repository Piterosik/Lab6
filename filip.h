#include <iostream>

using namespace std;

class filip
{
	private:
		string imie;
		string nazwisko;
		int wiek;
	public:
		filip();
		~filip();
		void setImie(string i);
		string getImie();
		void setNazwisko(string n);
		string getNazwisko();
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
	imie = n;
}

string filip::getNazwisko()
{
	return nazwisko;
}
