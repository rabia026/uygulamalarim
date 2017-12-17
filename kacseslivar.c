#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main (void) {
    char kelime [100];
    int uzunluk = 0;
    int n = 0;
    int sayac = 0;
    char harf;

    printf ("\n BIR KELIME GIRINIZ. (TURKCE KARAKTER KULLANMAYINIZ.): \n");
    gets(kelime);
    fflush (stdin);

    uzunluk = strlen (kelime);
    for ( n = 0; n < uzunluk; n++) {
        harf = kelime [n];
        if (harf >= "a" && harf <= "z")
            harf = harf - 32;
        if (harf == 'a' || harf == 'e' || harf == 'i' || harf == 'o' || harf == 'u')
            sayac++;
    }
    printf ("\n %s cumlesinde %i sesli harf vardir.", kelime, sayac);
    getch ();
}
