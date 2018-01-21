class osoba
{
	private:
		string imie;
		int wiek;
	public:
		nazwa();
		~nazwa();
		void setImie(string s);
		void setWiek(int w);
		void start(string i,int w);
		string getImie();
}


void Osoba::setImie(string s)
{
	imie = s;
}

void setWiek(int w)
{
    wiek = w;
}

void Osoba::start()
{
    cout<<"Imie osoby:  "<<imie<<endl<<"Wiek osoby:  "<<wiek<<endl;
}

