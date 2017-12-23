#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "Hangi unluye benziyorsun." << endl;
    cout << "Hangi rengi seviyorsun?" << endl;
    cout << "A) PEMBE      B) SARI       C) SIYAH        D) YESIL" << endl;
    char a;
    cin >> a;
    switch (a) {
    case 'A':
        system ("COLOR 37");
        getch ();
        cout << "10 PUAN ALDINIZ." << endl;
        system ("COLOR DF");
        getch ();
        break;
    case 'B':
        system ("COLOR 90");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR 47");
        getch ();
    case 'C':
        system ("COLOR 0E");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
    case 'D':
        system ("COLOR 17");
        getch ();
        cout << "15 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
        }
    cout << "Ne tur filmlerden hoslanirsiniz?" << endl;
    cout << "A) ASK      B) KORKU      C) MACERA      D) ROMANTIK" << endl;
    char b;
    cin >> b;
    switch (b) {
    case 'A':
        system ("COLOR 37");
        getch ();
        cout << "15 PUAN ALDINIZ." << endl;
        system ("COLOR DF");
        getch ();
        break;
    case 'B':
        system ("COLOR 90");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR 47");
        getch ();
    case 'C':
        system ("COLOR 0E");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
    case 'D':
        system ("COLOR 17");
        getch ();
        cout << "10 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
        }
        cout << "Filmlerde nelere dikkat edersiniz?" << endl;
        cout << "A) GORUNTU      B) HEPSI     C) KISILER      D) SENARYO" << endl;
        char c;
        cin >> c;
        switch (c) {
    case 'A':
        system ("COLOR 37");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR DF");
        getch ();
        break;
    case 'B':
        system ("COLOR 90");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR 47");
        getch ();
    case 'C':
        system ("COLOR 0E");
        getch ();
        cout << "10 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
    case 'D':
        system ("COLOR 17");
        getch ();
        cout << "15 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
        }
       cout << "Nerede film seyretmek istersiniz?" << endl;
       cout << "A) EVDE     B) SINEMA       C)DISARIDA       D)OKULDA" << endl;
       char d;
       cin >> d;
       switch (d) {
    case 'A':
        system ("COLOR 37");
        getch ();
        cout << "10 PUAN ALDINIZ." << endl;
        system ("COLOR DF");
        getch ();
        break;
    case 'B':
        system ("COLOR 90");
        getch ();
        cout << "15 PUAN ALDINIZ." << endl;
        system ("COLOR 47");
        getch ();
    case 'C':
        system ("COLOR 0E");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
    case 'D':
        system ("COLOR 17");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
        }
        cout << "Neler yapmaktan hoslanirsiniz?" << endl;
        cout << "A)AILEMLE ZAMAN GECIRMEK     B)SARKI DINLEMEK     C)ASKIMLA ZAMAN GECIRMEK     D)HEPSINI" << endl;
        char e;
        cin >> e;
        switch (d) {
    case 'A':
        system ("COLOR 37");
        getch ();
        cout << "10 PUAN ALDINIZ." << endl;
        system ("COLOR DF");
        getch ();
        break;
    case 'B':
        system ("COLOR 90");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR 47");
        getch ();
    case 'C':
        system ("COLOR 0E");
        getch ();
        cout << "5 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
    case 'D':
        system ("COLOR 17");
        getch ();
        cout << "15 PUAN ALDINIZ." << endl;
        system ("COLOR B0");
        getch ();
        }
        cout << "PUANINIZI GIRINIZ: ";
        int x;
        cin >> x;
        if (x <= 50) {
            cout << "SERA TOKDEMIR ' e benziyorsunuz." << endl << endl;
        }
        else {
            cout << "FAHRIYE EVCEN ' e benziyorsunuz." << endl << endl;
        }
    return 0;
}
