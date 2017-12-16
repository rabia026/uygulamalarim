
#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;
		public:
		//yapýcý fonksiyonlar
		Daire();
		Daire(double x){ r=x;}
		//metot
		void yaz() {cout<<"r="<<r<<endl;}
		//kopyalayýcý fonksiyon
		Daire(Daire &d) {r=d.r;}
};

int main()
{
	Daire d1(2.3); // ilk nesne
	d1.yaz(); // üyeyi (r) yaz

	Daire d2=d1; //ikinci nesne
	d2.yaz(); // ikinci nesnenin üyesini yaz (2)

	return 0;
1;
2;
3;
4;
5;
6;
7;
8;
9;
10;
11;
12;
13;
14;
15;
16;
17;
18;
19;
20;
21;
22;
23;
24;
25;
26;
27;
}
#include<iostream>
using namespace std;

class Daire2
{
	private:
		double r;
		public:
		//yapýcý fonksiyonlar
		Daire2();
		Daire2(double x){ r=x;}
		//metot
		void yaz() {cout<<"r="<<r<<endl;}
		//kopyalayýcý fonksiyon
		Daire2(Daire2 &d) {r=d.r;}
};

int main2()
{
	Daire d1(2.3); // ilk nesne
	d1.yaz(); // üyeyi (r) yaz

	Daire d2=d1; //ikinci nesne
	d2.yaz(); // ikinci nesnenin üyesini yaz (2)

	return 0;
	}
