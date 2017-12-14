#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Ingilizce ogrenmeye ne dersiniz? Sanirim EVET diyorsunuz. Haydi o zaman ingilizce ogrenelim." << endl;
    cout << "Ilk olarak kelime bilgisi ile baslayalim." << endl;
    cout << endl << endl;
    system ("COLOR A0");
    getch ();
    cout << "SPOR KELIMELERI;" << endl << endl << endl;
    system ("COLOR B5");
    getch ();
    cout << "Archery: Okculuk     Athletics: Atletizm     Baseball: Beyzbol     Basketball: Basketbol" << endl << endl ;
    cout << "Boxing: Boks         Cycling: Bisiklet Yarislari                   Diving: Dalis" << endl << endl ;
    cout << "Fencing: Eskrim      Teakwondo: Tekvando     Tennis: Tenis         Ice hockey: Buz hokeyi" << endl << endl ;
    cout << "Ski Jumping: Kayakla atlama                  Snowboarding: Snowboard ' la yapilan bir nevi kayak cesidi" << endl << endl << endl;
    system ("COLOR 30");
    getch ();
    cout << "RENKLER;" << endl << endl << endl;
    system ("COLOR B5");
    getch ();
    cout << "White: Beyaz      Black: Siyah        Red: Kirmizi     Green: Yesil      Blue: Mavi" << endl << endl;
    cout << "Yellow: Sari      Orange: Turuncu     Pink: Pembe      Maroon: Bordo     Beige: Bej    " << endl << endl;
    cout << "Gray: Gri         Light blue: Acýk mavi     Dark green: Koyu yesil     Purple: Mor" << endl << endl;
    cout << "Violet:Eflatun    Navy blue: Lacivert       Turquoise: Turkuaz         Brown: Kahverengi" << endl << endl;
    cout << "Reddish: Kirmizimsi      Blueish: Mavimsi     Pinkish: Pembemsi      Yellowish: Sarimsi" << endl << endl;
    cout << "Dark red: Koyu kirmizi   Light blue: Acik mavi                       Bright green: Parlak yesil" << endl << endl << endl;
    system ("COLOR 47");
    getch ();
    cout << "DOGA KELIMELERI;" << endl << endl << endl;
    system ("COLOR B5");
    getch ();
    cout << "Nature: Doga      Earth: Yeryuzu      Tree: Agac     Flower: Cicek     Sea: Deniz" << endl << endl;
    cout << "Plant: Dikmek     Forest: Orman       Lake: gol      Mountain: Dag     River: Nehir" << endl << endl;
    cout << "Pond: Golet       Ocean: Okyanus      Star: Yildiz   The Moon: Ay      The Sun: Gunes" << endl << endl;
    cout << "Cloud: Bulut      The Sky: Gokyuzu    Grass: Ot      Rain: Yagmur      Rainbow: Gokkusagi" << endl << endl;
    cout << "Natural forces: Dogal afetler         Rainbow: Gokkusagi      Thunder: Gok gurultusu" << endl << endl;
    cout << "Snow: Kar     Fog: Sis    Valley: Vadi    Plateau: Plato, yayla        Avalanche: Cig " << endl << endl;
    cout << "Earthquake: Deprem        Landslide: Heyelan       Hoarfrost: Kiragi   Erosion: Erozyon" << endl << endl;
    cout << "Ecosystem: Ekosistem      Habitat: Habitat         Eco-friendly / nature-friendly: Doga dostu" << endl << endl;
    cout << "Forestation: Agaclandirma     Deforestation: Ormansizlasma    Wood: Odun / agaclik alan" << endl << endl << endl;
    system ("COLOR 4F");
    getch ();
    cout << "OYUNCAKLAR VE OYUNLAR;" << endl << endl << endl;
    system ("COLOR B5");
    getch ();
    cout << "Toy: Oyuncak     Ball: Top        Tren: Train    Car: Araba    Plane: Ucak" << endl << endl;
    cout << "Truck: Kamyon    Chess: Satranc   Checkers: Dama   Backgammon: Tavla" << endl << endl;
    cout << "Hopscotch: Seksek      Hide and seek: Saklambac     Chinese whispers: Kulaktan kulaga" << endl << endl;
    cout << "Play dough: Oyun hamuru    Water gun: Su tabancasi    Bobo doll: Haciyatmaz" << endl << endl << endl;
    system ("COLOR A0");
    getch ();
    system("COLOR 48");
    getch ();
    cout << "SIMDI BIRAZ ALISTIRMA YAPALIM. ASAGIDAKI KELIMELERIN ANLAMLARINI YANLARINDA VERILEN NUMARAYI YAZINIZ." << endl;
    cout << "TRUCK = ( 1. ARABA , 2.KAMYON , 3.TABANCA , 4.TREN )" << endl;
    int a;
    cin >> a;
    switch (a) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KAMYON OLACAKTI." << endl;
        break;
    case '2':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '3':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KAMYON OLACAKTI." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KAMYON OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "ARCHERY = ( 1. ATLETIZM , 2. OKCULUK , 3. TAVLA , 4. DAMA )" << endl ;
    char b;
    cin >> b;
    switch (b) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKCULUK OLACAKTI." << endl;
        break;
    case '2':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '3':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKCULUK OLACAKTI." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKCULUK OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "WATER GUN = ( 1. YAGMUR , 2. KAR , 3. SU TABANCASI , 4. SU MAKINESI )" << endl;
    char c;
    cin >> c;
    switch (c) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP SU TABANCASI OLACAKTI." << endl;
        break;
    case '2':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP SU TABANCASI OLACAKTI." << endl;
        break;
    case '3':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP SU TABANCASI OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "OCEAN = ( 1. OLTA , 2. DENIZ , 3. OKYANUS , 4. OKTAY )" << endl ;
    char d;
    cin >> d;
    switch (d) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKYANUS OLACAKTI." << endl;
        break;
    case '2':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKYANUS OLACAKTI." << endl;
        break;
    case '3':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP OKYANUS OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "RAINBOW = ( 1. HAYALET , 2. KUZEY ISIGI , 3. GOKKUSAGI , 4. HACIYATMAZ )" << endl;
    char e;
    cin >> e;
    switch (e) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP GOKKUSAGI OLACAKTI." << endl;
        break;
    case '2':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP GOKKUSAGI OLACAKTI." << endl;
        break;
    case '3':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP GOKKUSAGI OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "DARK RED = ( 1. KOYU KIRMIZI , 2. KIRMIZIMSI , 3. ACIK KIRMIZI , 4. KIRMIZI )" << endl;
    char f;
    cin >> f;
    switch (f) {
    case '1':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '2':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KOYU KIRMIZI OLACAKTI." << endl;
        break;
    case '3':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KOYU KIRMIZI OLACAKTI." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KOYU KIRMIZI OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "REDDISH = ( 1. KOYU KIRMIZI , 2. KIRMIZIMSI , 3. ACIK KIRMIZI , 4. KIRMIZI )" << endl;
    char g;
    cin >> g;
    switch (g) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KIRMIZIMSI OLACAKTI." << endl;
        break;
    case '2':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '3':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KIRMIZIMSI OLACAKTI." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP KIRMIZIMSI OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    cout << "BEIGE = ( 1. BELGE , 2. BEJ , 3. BEL , 4. BEN )" << endl;
    char h;
    cin >> h;
    switch (h) {
    case '1':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP BEJ OLACAKTI." << endl;
        break;
    case '2':
        cout << "TEBRIKLER DOGRU CEVAP VERDINIZ." << endl;
        break;
    case '3':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP BEJ OLACAKTI." << endl;
        break;
    case '4':
        cout << "UZGUNUM YANLIS CEVAP VERDINIZ. DOGRU CEVAP BEJ OLACAKTI." << endl;
        break;
    }
    cout << endl;
    system("COLOR 48");
    getch ();
    return 0;
}
