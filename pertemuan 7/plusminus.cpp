#include <iostream>
using namespace std;
int main()
{

     int x;
     float y;

     x = +7;
     y = -3.12;

     cout << "Nilai x : " << x << endl;
     cout << "Nilai Y : " << y << endl
          << endl;

     x = -x;
     y = -y;

     cout << "Nilai x Yang Baru : " << x << endl;
     cout << "Niali y Yang baru : " << y << endl;

     return 0;
}