#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main (void) {
    int kenar1 = 0, kenar2 = 0, kenar3 = 0;
    printf ("\n UCGENIN KENARLARI : ");
    printf ("\n 1. KENAR:");
    scanf ("%i", &kenar1);
    fflush (stdin);

    printf ("\n 2. KENAR:");
    scanf ("%i", &kenar2);
    fflush (stdin);

    printf ("\n 3. KENAR:");
    scanf ("%i", &kenar3);
    fflush (stdin);

    if ((kenar1 == kenar2) && (kenar2 == kenar3)){
        printf ("\n TUM KENARLAR ESIT");
        printf ("\n ESKENAR BIR UCGENDIR.");
    } else if ( (kenar1 == kenar2) || (kenar2 == kenar3) || (kenar1 == kenar3)) {
        printf ("\n IKI KENAR ESIT");
        printf ("\n BU IKIZKENAR BIR UCGENDIR...");
    } else {
        printf ("\n KENARLAR ESIT DEGIL");
        printf ("\n KARMA BIR UCGENDIR...");
    }
    getch ();
}

