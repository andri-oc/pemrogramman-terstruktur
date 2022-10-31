#include <iostream>
using namespace std;

int main()
{
     // Deklarasi Variabel
     int a;
     double b;
     char c;
     char *d;

     // mengisi nilai kedalam variabel
     a = 20;
     b = 3.12232;
     c = 'c';
     d = (char *)"Contoh string";

     // Menampilkan Nilai Variabel
     cout << "Nilai a  : " << a << endl;
     cout << "Nilai b  : " << b << endl;
     cout << "Nilai c   : " << c << endl;
     cout << "Nilai d   : " << d << endl;

     return 0;
}