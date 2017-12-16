#include<iostream>
using namespace std;

// Daire adýnda bir sýnýf oluþturuyoruz
class Daire
{
	//burada tanýmlayacaklarýmýz sýnýf dýþýnda okunmaz
	private:
	//pi deðiþkenini sadece içerdeki kodlar görsün istiyorum
	const double pi=3.14;

	//burada tanýmlananlar sýnýf dýþýnda da okunabilir
	public:
	//r deðiþkeni ve alan() fonksiyonuna dýþarýdan da eriþilebilir
	double r;
	double alan(double r)
	{
		return pi*r*r;
	}
};
int main()
{
	// Daire sýnýfýndan d adlý bir nesne oluþturuyorum
	Daire d;
	cout<<"yaricap giriniz:"; cin>>d.r;
	cout<<"alan="<<d.alan(d.r);

	return 0;
}
