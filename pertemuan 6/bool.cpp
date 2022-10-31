#include <iostream>
using namespace std;
int main()
{
     int angka;
     bool hasil = true;

     cout << "Masukan angka  =  ";
     cin >> angka;

     hasil = angka > 10;
     cout << hasil;
     return 0;
}