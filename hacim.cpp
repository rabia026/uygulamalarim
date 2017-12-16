#include <iostream>
#include <conio.h>
using namespace std;

class hacimhesapla{

      int x,y,z,hacim;
          public:
                 // ulaþmak için bir yapýcý fonksiyona ihtiyacýmýz var
                 hacimhesapla(int a,int b,int c){
                            x=a;
                            y=b;
                            z=c;
                            hacim=x*y*z;
                            }
                  void goster(){
                       cout << "Hacim : " << hacim << endl;
                       }
             };

main(){
       hacimhesapla test1(3,4,5);
       hacimhesapla test2(3,9,12);
       hacimhesapla test3(0,5,45);

       test1.goster();
       test2.goster();
       test3.goster();

       getch();
       return 0;
       }
