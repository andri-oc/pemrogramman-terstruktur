#include <iostream>
using namespace std;
int x;

void test()
{
    x = 40;
    cout << "nilai x didalam fungsi tes() adalah : " << x << endl;
}

int main()
{
    x = 30;
    cout << "nilai x di dalam fungsi main() adalah : " << x << endl;

    test();

    return 0;
}