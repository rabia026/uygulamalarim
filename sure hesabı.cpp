#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
class timer{
    public:
        timer();
        ~timer();
    private:
        clock_t start;
};
timer::timer()
{
    start=clock();
}
timer::~timer()
{
    clock_t end;
    end=clock();
    cout<<"gecen zaman: "<< (end-start)/CLOCKS_PER_SEC<<" saniye \n";
}
int main()
{
    timer ob;
    char c;
    cout << "bir tusa sonrada entere basýn:" << endl;
    cin>>c;
    getch ();
    return 0;
}
