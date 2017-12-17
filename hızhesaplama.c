#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main (void)
{
    float mesafe = 0;
    int zaman = 0;
    float hiz = 0;

    printf ("\n Gidilecek mesafe (m): ");
    scanf ("%f" , &mesafe);
    fflush (stdin);
    hiz = (float) mesafe / zaman;

    printf ("\n HIZINIZ : %.2f m/s OLMALIDIR." , hiz);
    getch ();
    }



