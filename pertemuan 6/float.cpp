#include <iostream>
using namespace std;

int main()
{
     float jari, hasil;
     const float p = 3.14;

     cout << "Masukan jumlah jari-jari = ";
     cin >> jari;
     hasil = (jari * p) * 2;
     cout << "Keliling Dari lingkaran adalah =  " << hasil << endl;
     return 0;
}