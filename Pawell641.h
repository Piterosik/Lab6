#include<iostream>
#include<string>


using namespace std;

class pawel
{
	private:
		string imie;
		int wiek;
	public:
        pawel();
        ~pawel();
		void setImie(string s);
		void setWiek(int w);
		void start();
		string getImie();
};

pawel::pawel()
{

}





pawel::~pawel()
{

}
void pawel::setImie(string s)
{
	imie = s;
}

void pawel::setWiek(int w)
{
    wiek = w;
}

void pawel::start()
{
    string i;
    int w;
    cout<<"Podaj imie  ";
    cin>>i;
    cout<<endl;
    cout<<"Podaj wiek  ";
    cin>>w;
    cout<<endl;
    setImie(i);
    setWiek(w);
    cout<<"Imie osoby:  "<<imie<<endl<<"Wiek osoby:  "<<wiek<<endl;
}

