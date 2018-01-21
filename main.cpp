#include <iostream>

using namespace std;

class Samochody
{
public:
    void start()
    {
    cout<<"Witam. Wywolane metoda start. "<<endl;
    }
};

int main()
{
    Samochody s1;
    cout << "Hello world!" << endl;
    s1.start();
    return 0;
}
