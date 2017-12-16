#include<iostream>
using namespace std;

// Daire ad�nda bir s�n�f olu�turuyoruz
class Daire
{
	//burada tan�mlayacaklar�m�z s�n�f d���nda okunmaz
	private:
	//pi de�i�kenini sadece i�erdeki kodlar g�rs�n istiyorum
	const double pi=3.14;

	//burada tan�mlananlar s�n�f d���nda da okunabilir
	public:
	//r de�i�keni ve alan() fonksiyonuna d��ar�dan da eri�ilebilir
	double r;
	double alan(double r)
	{
		return pi*r*r;
	}
};
int main()
{
	// Daire s�n�f�ndan d adl� bir nesne olu�turuyorum
	Daire d;
	cout<<"yaricap giriniz:"; cin>>d.r;
	cout<<"alan="<<d.alan(d.r);

	return 0;
}
