
#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;

	public:
		//alan fonksiyonu bu s�n�f�n private: �yelerine eri�ebilirsin
	friend void alan();
};

void alan()
{
	//daire s�n�f�ndan d adl� bir nesne olu�tural�m
	Daire d;

	//fonksiyon arkada� oldu�u i�in private:r �yesine eri�ebilir
	cout<<"r="; cin>>d.r;
	cout<<"alan="<<3.14*d.r*d.r;
}
int main()
{
	alan();// alan fonksiyonu �al���r
	return 0;
}
