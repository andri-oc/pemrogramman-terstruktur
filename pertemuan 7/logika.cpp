#include <iostream>
using namespace std;

int main()
{
     bool a, b;
     a = (a == 5);
     b = (5 > 4);

     bool x, y, z;

     x = a && b;
     y = a || b;
     z = !(a && b);
     cout << x << y << z << endl;
     return 0;
}