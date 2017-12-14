#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "Hikayemiz Arabistan'da geciyor. Gunlerden bir gun buyuk bir malikanede cinayet islenir. Malikane' nin sahibi Abdul Jalil bicaklanarak oldurulmustur. O gece malikanede bulunan herkes supheli konumundadir. " << endl;
    cout << "Dedektif Mehmet Bey, herkesi sorgular." << endl;
    cout << "Cinayet islendigi saatte ne yapiyordunuz?" << endl;
    cout << "      Cevaplar:" << endl;
    cout << endl;
    cout << "Evin hizmetcisi: Gunluk islerimi bitirmis odama cekilmistim. Zaten o saatte bizim ortalarda gorunmemiz yasaktir. Ancak Bay Abdul Jalil beni evdeki muhtelif yerlerdeki dugmeye basarak cagirdiginda yanina gidebiliriz. O gece dugmeye basti ve yanina gittigimde yerde yatiyordu." << endl;
    cout << endl;
    cout << "Evin Hanimi Fayruz: Oturma odasinda cocuklarla birlikteydim. Zaten esim calisma odasinda olduruldu. Cocuklara sorabilirsiniz. Biz bagirtilara kostuk. Gittigimizde coktan olmustu." << endl;
    cout << endl;
    cout << "Evde misafir olarak kalan Bay Adams: Cinayet islendigi sirada kutuphanedeydim. Abdul Jalil Bey' e ait Arapca kitap koleksiyonundan bir kitabi okumaya baslamistim. Sesleri duyunca calisma odasina kostum ama muhterem olmustu. Hatta okumaya basladigim kitabin arasina ayrac dahi koydum. Buyurun kitapda burada." << endl;
    cout << endl;
    cout << "Gercekten de kitabin ilk sayfalarinin arasinda ayrac vardi." << endl;
    cout << endl;
    cout << "Dedektif Mehmet delilleri ve olay yerini tekrar inceler ve katili yakalar. Sizce katil kim?" << endl;
    cout << endl;
    cout << "Katilin hizmetci oldugunu dusunuyorsaniz 1' i yaziniz." << endl;
    cout << endl;
    cout << "Katilin Fayruz oldugunu dusunuyorsaniz 2' yi yaziniz." << endl;
    cout << endl;
    cout << "Katilin Bay Adams oldugunu dusunuyorsaniz 3' u yaziniz." << endl;
    cout << endl;
    cout << "Bu olayin bir intihar oldugunu dusunuyorsaniz 0' i yaziniz." << endl;
    system ("COLOR A0");
    getch ();
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 2:
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 3:
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 0:
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Yesil mantolu, kirmizi entarili ve siyah dugmeli. Bu nedir?" << endl;
    cout << "A)karpuz , B)cilek , C)muz , D)kardan adam" << endl;
    system ("COLOR 5F");
    getch ();
    char y;
    cin >> y;
    switch (y)
    {
    case 'A':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Gozleri fener, gunduzleri soner. Bu nedir? " << endl;
    cout << "A)isik , B)kanarya , C)yildiz , D)ay" << endl;
    system ("COLOR CF");
    getch ();
    char a;
    cin >> a;
    switch (a)
    {
    case 'A':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Bakmasi guzel, almasi uzer. Bu nedir?" << endl;
    cout << "A)gul , B)papatya ,  C)goz , D)lanet" << endl;
    system ("COLOR B0");
    getch ();
    char b;
    cin >> b;
    switch (b)
    {
    case 'A':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Kucuk mezar, dunyayi gezer. Bu nedir?" << endl;
    cout << "A)turist , B)seyahat , C)ayakkabi , D)at" << endl;
    system ("COLOR 8F");
    getch ();
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Havada ucar, kanadi yok. Bu nedir?" << endl;
    cout << "A)bulut , B)ucak , C)helikopter , D)kus" << endl;
    system ("COLOR 0E");
    getch ();
    char z;
    cin >> z;
    switch (z)
    {
    case 'A':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Ben iki hasretlinin arasinda dururum. Onlari konustururum. Bu nedir?" << endl;
    cout << "A)kart , B)simge , C)telefon , D)telgraf" << endl;
    system ("COLOR 30");
    getch ();
    char r;
    cin >> r;
    switch (r)
    {
    case 'A':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Kiri en az olan meyve hangisidir?" << endl;
    cout << "A)kar , B)kiraz , C)kale , D)portakal" << endl;
    system ("COLOR EC");
    getch ();
    char i;
    cin >> i;
    switch (i){
        case 'A':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'B':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'C':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Hangi kalem dusmez?" << endl;
    cout << "A)kursun kalem , B)kara kalem , C)pilot kalem , D)uclu kalem" << endl;
    system ("COLOR 70");
    getch ();
    char s;
    cin >> s;
    switch (s){
    case 'A':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Agır suyun adi nedir?" << endl;
    cout << "A)buzlanmis su , B)portakal suyu , C)visne suyu , D)kayısı suyu" << endl;
    system ("COLOR A0");
    getch ();
    char h;
    cin >> h;
    switch (h)
    {
    case 'A':
        cout << "TEBRIKLER DOGRU YANIT VERDINIZ. PUANINIZ '10'DIR." << endl;
        break;
    case 'B':
        cout << "UZGUNUM YANLIS YANIT VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'C':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    case 'D':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. PUANINIZ '0'DIR." << endl;
        break;
    }
    cout << endl;
    cout << "Simdi IQ seviyeni hesaplayalım. Lutfen aldiginiz notu giriniz: " << endl;
    int q;
    cin >> q;
    if ( q > 70 )
    {
        cout << "IQ SEVIYENIZ IYI DUZEYDE. BU GIDISLE BILIM INSANI BILE OLABILIRSINIZ." << endl;
    }
    else if ( q <= 70 )
    {
        cout << "IQ SEVIYENIZ ORTA DUZEYDE. BOL BOL BEYNINIZI GELISTIRMEK ICIN BEYIN OYUNLARI OYNAYIN. " << endl;
    }
    else if ( q <= 50 )
    {
        cout << "IQ SEVIYENIZ COK DUSUK. BOL BOL BEYNINIZI GELISTIRMEK ICIN BEYIN OYUNLARI OYNAYIN. " << endl;
    }
    return 0;
}
