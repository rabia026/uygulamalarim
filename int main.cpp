#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
int toplama () {
    int x, y;
    cout << "IKI SAYI GIRINIZ: " << endl;
    cin >> x >> y;
    return x + y;
}
int carpma () {
    int z, t;
    cout << "IKI SAYI GIRINIZ: " << endl;
    cin >> z >> t;
    return z * t;
}

float bolme () {
    float a, r;
    cout << "IKI SAYI GIRINIZ: " << endl;
    cin >> a >> r;
    return a / r;
}
int cikarma () {
    int k, d;
    cout << "IKI SAYI GIRINIZ: " << endl;
    cin >> k >> d;
    return k - d;
}
int main()
{
    system ("COLOR F0");
    getch ();
    cout << "YAPMAK ISTEDIGINIZ ISLEMI SECINIZ." << endl;
    cout << "1. TOPLAMA     2. CARPMA      3. BOLME       4. CIKARMA " << endl;
    int c;
    cin >> c;
    system ("COLOR 3F");
    getch ();
    switch (c) {
    case 1:
        cout << toplama () << endl;
        system ("COLOR D7");
        getch ();
        break;
    case 2:
        cout << carpma () << endl;
        system ("COLOR 90");
        getch ();
        break;
    case 3:
        cout << bolme () << endl;
        system ("COLOR 47");
        getch ();
        break;
    case 4:
        cout << cikarma () << endl;
        system ("COLOR E0");
        getch ();
        break;
    }

    getch ();
    return 0;
}
