#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*boslukadli fonksiyonun prototypeni tanýmlýyoruz. */
void bosluk (int);

void main (void) {
    int cizgi = 0;
    int satir = 0;
    int sayi = 0;
    int s = 40;

    printf ("\n CIZGI SAYISI COK FAZLA.");
    scanf ("%i" , &cizgi);
    fflush (stdin);
    if (cizgi > 20) {
        printf ("\n CIZGI SAYISI COK FAZLA.");
        getch ();
        return 0;
    }
    for (satir = 1; satir <= cizgi; satir++) {
        printf ("\n");
        bosluk (s);
         for (sayi = 1; sayi <= satir; sayi++)
            printf ("* ");
         for (sayi = satir - 1; sayi >= 1; sayi--)
            printf ("* ");

         s = s - 2;
    }
    getch ();
    }
void bosluk (int t) {
    int sayac = 0;
    for (sayac = 1; sayac <= t; sayac++)
        putchar (" ");
}
