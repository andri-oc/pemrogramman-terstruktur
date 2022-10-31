#include <iostream>
using namespace std;
int main()
{
     bool a, b, c, d, e;

     a = (7 == 5);
     b = (5 > 4);
     c = (3 != 2);
     d = (6 >= 6);
     e = (5 < 5);

     cout << "(7 == 5) = " << a << endl;
     cout << " (5 > 4 ) =" << b << endl;
     cout << "(3 != 2 ) = " << c << endl;
     cout << "(6 >= 6) = " << d << endl;
     cout << "(5 < 5)   = " << e << endl;

     int x = 5, y = 3, z = 2;

     a = (a == 0);
     b = ((x * y) >= z);

     cout << "( a ==0 ) = " << a << endl;
     cout << "((x * y ) >= z) = " << b << endl;
     return 0;
}