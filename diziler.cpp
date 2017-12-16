

#include<iostream>
using namespace std;

class Daire
{
	public:
		double r;
		double alan(double r)
		{
			return 3.14*r*r;
		}
};
int main()
{
	//d0,d1,d2,d3,d4 adlı 5 adet Daire nesnesi oluşturulacak
	Daire d[5];
	int i=0;

	//her nesneye r verisini atayalım
	for(i=0; i<5; i++)
	d[i].r=i;

	//her nesnenin alanını yazdıralım
	for(i=0; i<5; i++)
	cout<<"d["<<i<<"] alani="<<d[i].alan(d[i].r)<<endl;

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
28;
}
#include<iostream>
using namespace std;

class Daire2
{
	public:
		double r;
		double alan(double r)
		{
			return 3.14*r*r;
		}
};
int main2()
{
	//d0,d1,d2,d3,d4 adlı 5 adet Daire nesnesi oluşturulacak
	Daire d[5];
	int i=0;

	//her nesneye r verisini atayalım
	for(i=0; i<5; i++)
	d[i].r=i;

	//her nesnenin alanını yazdıralım
	for(i=0; i<5; i++)
	cout<<"d["<<i<<"] alani="<<d[i].alan(d[i].r)<<endl;

	return 0;
}
