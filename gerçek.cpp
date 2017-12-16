#include <iostream>
#include <conio.h>
using namespace std;

class deneme{
                     int a;
            public:
                   void ata(int x){
                        a=x;
                        }
                        int goster(){
                            return a;
                            }
                            }test1,test2;
main(){
       test1.ata(123);
       test2.ata(547);
      // test1.a=(15);
       cout << test1.goster() << endl << test2.goster();

       getch();
       return 0;
       }
