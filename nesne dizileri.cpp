#include <iostream>
#include <conio.h>
using namespace std;

class nesnedizisi{
      int x;
      public:
             void ata(int n){
                  x=n;
                  }
             int goster(){
                 return x;
                 }
      };

main(){
       int i;
       nesnedizisi abc[5];
       for(i=0;i<5;i++)
       abc[i].ata(i);

       for(i=0;i<5;i++)
       cout << abc[i].goster() << endl;

       getch();
       return 0;
       }
