#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main () {
    cout << "Sesli harflarin kontrolu..." << endl;
    cout << "===========================" << endl;
    cout << "Bir harf giriniz: " << endl;
    char harf;
    cin >> harf;
    if ( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O' || harf == 'U')
        cout << "SESLI HARFTÝR..." << endl;
    else
        cout << "SESLI HARF DEGILDIR..." << endl;
    getch ();
}
