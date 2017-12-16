
#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;

	public:
		//alan fonksiyonu bu sýnýfýn private: üyelerine eriþebilirsin
	friend void alan();
};

void alan()
{
	//daire sýnýfýndan d adlý bir nesne oluþturalým
	Daire d;

	//fonksiyon arkadaþ olduðu için private:r üyesine eriþebilir
	cout<<"r="; cin>>d.r;
	cout<<"alan="<<3.14*d.r*d.r;
}
int main()
{
	alan();// alan fonksiyonu çalýþýr
	return 0;
}
