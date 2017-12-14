#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Okuyacak kitap bulamiyor musunuz?" << endl;
    cout << endl;
    cout << "O zaman kitabinizi secelim. Kitap turleri;" << endl;
    cout << endl;
    cout << "1.Ani Kitaplari , 2.Siir Kitaplari , 3.Gezi Kitaplari , 4.Romanlar , 5.Yemek Kitaplari , 6.cocuk kitaplari , 7.hikayeler" << endl;
    cout << endl;
    cout << "Ne tur kitaplar okumayi seviyorsunuz. Yukarida verilen kitap turlerinin basinda yazan numarayi giriniz: " << endl;
    system ("COLOR 3F");
    getch ();
    int x;
    cin >> x;
    switch (x) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR D0");
        getch ();
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    }
    int y;
    cin >> y;
    switch (y) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR 5F");
        getch ();
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    }
    int d;
    cin >> d;
    switch (d) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR D0");
        getch ();
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    }
    int u;
    cin >> u;
    switch (u) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    }
    int o;
    cin >> o;
    switch (o) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR D0");
        getch ();
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR D0");
        getch ();
        break;
    }
    int e;
    cin >> e;
    switch (e) {
    case 1:
        cout << "Ani kitaplari;" << endl;
        cout << "HALIDE EDIP ADIVAR / MOR SALKIMLI EV" << endl;
        cout << "PAUL AUSTER / KIS GUNLUGU" << endl;
        cout << "ORHAN PAMUK / ISTANBUL: HATIRALAR VE SEHIR" << endl;
        cout << "OLIVER SACKS / TUNGSTEN DAYI: KIMYASAL BIR COCUGUN ANILARI" << endl;
        cout << "TONY BLAIR / BIR YOLCULUK" << endl;
        cout << "FRANK MCCOURT / ANGELA ' NIN KULLERI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 2:
        cout << "Siir kitaplari;" << endl;
        cout << "AHMET ARIF / HASRETINDE PRANGALAR ESKITTIM" << endl;
        cout << "NAZIM HIKMET / 835 SATIR" << endl;
        cout << "CEMAL SUREYA / SEVDA SOZLERI" << endl;
        cout << "TURGUT UYAR / BUYUK SAAT" << endl;
        cout << "SABAHATTIN ALI / TUM SIIRLERI" << endl;
        cout << "CAN YUCEL / SEVGI DUVARI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 3:
        cout << "Gezi kitaplari;" << endl;
        cout << "EVLÝYA CELEBI SEYAHATNAMESI" << endl;
        cout << "ILBER ORTAYLI / ESKI DUNYA SEYAHATNAMESI" << endl;
        cout << "IBN BATTUDA SEYAHATNAMESI" << endl;
        cout << "EVLIYA CELEBI / SEYAHATNAMEDEN SECMELER" << endl;
        cout << "AHMET HASIM / FRANKFURT SEYAHATNAMESI" << endl;
        system ("COLOR 5F");
        getch ();
    case 4:
        cout << "Romanlar;" << endl;
        cout << "AHMET UMIT / ISTANBUL HATIRASI" << endl;
        cout << "JOHN STEINBECK / FARELER VE INSANLAR" << endl;
        cout << "STEPHEN KING / MAHSER" << endl;
        cout << "HARPER LEE / BULBULU OLDURMEK" << endl;
        cout << "DAN BROWN / BASLANGIC" << endl;
        cout << "JOHN GREEN / AYNI YILDIZLARIN ALTINDA" << endl;
        cout << "HALIDE EDIP ADIVAR / ATESTEN GOMLEK" << endl;
        cout << "HALIT ZIYA USAKLIGIL / ASK - I MEMNU" << endl;
        cout << "SABAHATTIN ALI / KUYUCAKLI YUSUF" << endl;
        cout << "KHALED HOSSEINI / UCURTMA AVCISI" << endl;
        cout << "ELIF SAFAK / ASK" << endl;
        cout << "HALIDE EDIP ADIVAR / HANDAN" << endl;
        cout << "AHMET UMIT / SEYTAN AYRINTIDA GIZLIDIR" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 5:
        cout << "Yemek kitaplari;" << endl;
        cout << "CENK GIRGINOL / KAHVE: TOPRAKTAN FINCANA" << endl;
        cout << "JAMIE OLIVER / JAMIE ' NIN ITALYAN MUTFAGI" << endl;
        cout << "GULFAM GOKNAR / MUZIK VE YEMEK" << endl;
        cout << "AYNUR TARTAN / BAK MUTFAKTA BARIS VAR" << endl;
        cout << "MARIANNA YARASIMOS / 500 YILLIK OSMANLI MUTFAGI" << endl;
        cout << "GONUL PALAOGLU / TATLIDAN TUZLUDAN" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 6:
        cout << "Cocuk kitaplari;" << endl;
        cout << "HAREKETLI BAHCE" << endl;
        cout << "UYKUCU ASLANLAR NASIL UYUR?" << endl;
        cout << "MINIK DINAZOR NASIL BANYO YAPAR?" << endl;
        cout << "ILK ETKINLIK KITABIM" << endl;
        cout << "TEO ' NUN KAKA KITABI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    case 7:
        cout << "Hikayeler;" << endl;
        cout << "JACOB GRIMM / CIZMELI KEDI" << endl;
        cout << "HANS ANDERSAN / KIBRITCI KIZ" << endl;
        cout << "LEV TOLSTOY / INSAN NE IE YASAR" << endl;
        cout << "NIKOLAY GOGOL / PALTO" << endl;
        cout << "EDMONDO DE AMICIS / COCUK KALBI" << endl;
        system ("COLOR 5F");
        getch ();
        break;
    }
    getch ();
    return 0;
}
