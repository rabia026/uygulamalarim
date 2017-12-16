#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class insan {
public:
    int boy;
    int kilo;
    int yas;
    char * isim;
    char * soyýsým;
};
class bolum {
public:
    char isim [20];
    int dersSayisi;
    char bina [50];
};
class ogrenci : public insan {
public :
    bolum* Bolum;
    char ono [20];
};
int main()
{
    ogrenci * rabia = new ogrenci ();
    insan * ezgi = new insan ();
    rabia -> boy = 160;
    rabia -> kilo = 55;
    rabia -> yas = 15;

    strcpy (rabia -> ono , "0804020");
    ezgi -> boy = 160;
    ezgi -> kilo = 55;
    ezgi -> yas = 15;
    bolum * bilg = new bolum ();
    strcpy (bilg -> isim , "Bilgisayar Muhendisi");
    bilg -> dersSayisi = 142;
    strcpy (bilg -> bina , "Muhendilik Binasi");
    ezgi -> Bolum = bilg;
    cout << "Ezgi ' nin bolumunun binasi : " << ((bolum*)rabia -> Bolum) -> bina << endl;
    getch ();
    return 0;
}
