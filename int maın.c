#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{

int tutsayi=0;
int tahmin=0;
int saniye=0;
int kactahmin=0;



saniye=time(NULL);
srand(saniye);

tutsayi=rand()%100+1;

printf("say� tuttum\n");
printf("ba�la\n");

soyle:

printf ("tahminin");
scanf("%d",&tahmin );


if (tahmin<1 || tahmin>100) {
printf("1-100 aras� s�yle");
}

kactahmin++;
if(tahmin==tutsayi) {
printf("tbr toplam %d seferde bildin \n", kactahmin);
}

else {
if(tahmin>tutsayi) {
printf("k���k say� s�yle\n"); goto soyle;

}
else { printf("b�y�k say� s�yle\n"); goto soyle; } }


return 0;
}

