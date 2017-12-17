#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void) {
    int sayilar [10] = {4 , 11, 15, 36, 55, 83, 42, 99, 18, 10};
    int aranan = 0;
    int konum = 0;
    int sayac = 0;
    char bulundu = "Y";

    printf ("\n LISTE ICERISINDE ARANACAK SAYI : ");
    scanf ("%i" , &aranan);
    fflush (stdin);

    for(sayac = 0; sayac < 10; sayac++) {
        if (sayilar [sayac] == aranan) {
            bulundu = "E";
            konum = sayac + 1;
            break;
        }
    }
if (bulundu == "E")
    printf ("\n %i SAYISI LISTENIN %i. SIRASINDA.", aranan, konum);
else
    printf ("\n %i SAYISI GECERLI DEGIL. " , aranan);
 getch ();
}
