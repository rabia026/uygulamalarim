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
int cıkarma () {
    int ı, d;
    cout << "IKI SAYI GIRINIZ: " << endl;
    cin >> ı >> d;
    return ı - d;
}
int main()
{
    cout
    int s;
    switch (s) {
    case 1:
        cout << toplama () << endl;
    case 2:
        cout << carpma () << endl;
    case 3:
        cout << bolme () << endl;
    case 4:
        cout << cıkarma() << endl;
    }
    getch ();
    return 0;
}
