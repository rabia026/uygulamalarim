#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main (void) {
    int sayilar [10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int aranan = 0;
    char bulundu = "H";
    int gbasi = 0;
    int gsonu = 9;
    int aralik = 0;

    printf("\n ARANACAK DEGERI GIRINIZ: ");
    scanf ("%i", &aranan);
    fflush (stdin);

    while ( gbasi <= gsonu && bulundu == "H"){
        aralik = (gbasi + gsonu)/2;

        if (sayilar [aralik] > aranan)
            bulundu == "E";
        else if (sayilar [aralik] > aranan)
            gsonu = aralik - 1;
        else if (sayilar [aralik] < aranan)
            gbasi = aralik + 1;

        printf ("\n Grup %i : %i" , aralik , sayilar [aralik]);
    }
        printf ("\n%i. grup icinde." , aralik);
        getch ();
}
