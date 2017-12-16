#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
using namespace std;

int main()
{
system ("COLOR 37");
getch ();
int tutsayi=0;
int tahmin=0;
int saniye=0;
int kactahmin=0;



saniye=time(NULL);
srand(saniye);

tutsayi=rand()%100+1;

cout << "AKLINDAN BIR SAYI TUTTUM. BAKALIM BU SAYIYI BULABILECEK MISIN??" << endl;
cout << "BASLA" << endl;
soyle:
    cout << "TAHMININ: " << endl;
    scanf("%d",&tahmin );
    if (tahmin<1 || tahmin>100) {
        cout << "1-100 ARASINDA BIR SAYI SOYLER MISIN?" << endl;
}
kactahmin++;
if(tahmin==tutsayi) {
cout << "TEBRIKLER SAYIYI BULDUNUZ. BRAVO..." << endl;
}

else {
if(tahmin>tutsayi) {
cout << "KUCUK SAYI SOYLER MISIN?" << endl; goto soyle;

}
else { cout << "BUYUK SAYI SOYLER MISIN?" << endl; goto soyle; } }


return 0;
}
