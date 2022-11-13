#include <iostream>
#include <string>
using namespace std;

int main () {
    int nomor;
    char answer;

    do {
    string desk = "Pilih rumus yang ingin digunakan : \n"
    "1. Persegi\n"
    "2. Persegi Panjang\n"
    "3. Segitiga\n"
    "4. Trapesium\n"
    "5. Jajar Genjang\n"
    "6. Belah Ketupat\n"
    "7. Layang-layang\n"
    "8. Lingkaran\n" ;
    cout << desk;

    }while (answer);
     cout << "Masukan pilihan rumus dalam angka: ";
     cin >> nomor;

     switch (nomor){
     case 1:
         int sisi, luas;
         cout << "Input panjang sisi persegi : ";
         cin >> sisi;
         luas = sisi * sisi;
         cout << "luas persegi : " << luas << endl;
     break;
     case 2:
         int panjang, lebar;
         cout << "Input panjang persegi panjang : ";
         cin >> panjang;
         cout << "Input lebar persegi panjang : ";
         cin >> lebar;
         luas = panjang * lebar;
         cout << "luas persegi panjang : " << luas << endl;
     break;
     case 3:
        int alas, tinggi;
        cout << "Input alas segitiga : ";
        cin >> alas;
        cout << "Input tinggi segitiga : ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "luas segitiga : " << luas << endl;
     break;
     case 4:
         int alas1, alas2;
         cout << "Input alas1 trapesium : ";
         cin >> alas1;
         cout << "Input alas2 trapesium : ";
         cin >> alas2;
         cout << "Input tinggi trapesium : ";
         cin >> tinggi;
         luas = 0.5 * (alas1+alas2) * tinggi;
         cout << "luas trapesium : " << luas << endl;
     break;
     case 5:
         cout << "Input alas jajar genjang : ";
         cin >> alas;
         cout << "Input tinggi jajar genjang : ";
         cin >> tinggi;
         luas = alas * tinggi;
         cout << "luas jajar genjang : " << luas << endl;
     break;
     case 6:
         int diagonal1, diagonal2;
        cout << "Input diagonal1 belah ketupat : ";
        cin >> diagonal1;
        cout << "Input diagonal2 belah ketupat : ";
        cin >> diagonal2;
        luas = 0.5 * diagonal1 * diagonal2;
        cout << "luas belah ketupat : " << luas << endl;
     break;
     case 7:
         cout << "Input diagonal1 layang-layang : ";
         cin >> diagonal1;
         cout << "Input diagonal2 layang-layang : ";
         cin >> diagonal2;
         luas = 0.5 * diagonal1 * diagonal2;
         cout << "luas layang-layang : " << luas << endl;
     break;
     case 8:
        int jari_jari;
        cout << "Input jari-jari lingkaran : ";
        cin >> jari_jari;
        luas = 3.14 * jari_jari * jari_jari;
        cout << "luas lingkaran : " << luas << endl;
     break;
     default:
        cout << "Pilih angka yang ada di list\n" ;
    break;
     }
     cout << endl;
     cout << "Ingin memilih rumus lain (y/t)?";
     cin >> answer;
     cout << endl;

      while (answer != 't');
      cout << "terima kasih";

     return 0;


}
