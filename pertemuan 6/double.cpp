#include <iostream>
using namespace std;

int main()
{
     double jari, hasil;
     const double p = 3.14;

     cout << "Masukan Jumlah Jari-jari = ";
     cin >> jari;

     hasil = jari * (jari * p);
     cout << "Luas dari lingkaran 3.14 x  " << jari << " x " << jari << " adalah " << hasil << endl;
     return 0;
}