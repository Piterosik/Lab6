#include<iostream>

using namespace std;

class osoba
{
	private:
		string imie;
		int wiek;
	public:
		nazwa();
		~nazwa();
		void setImie(string s);
		string getImie();
}

nazwa::nazwa()
{

}

void Osoba::setImie(string s)
{
	imie = s;
}

string getImie()
{
	return imie;
}

int main()
{


    return 0;
}
