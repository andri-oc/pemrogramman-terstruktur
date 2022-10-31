#include <string>
#include <iostream>

using namespace std;
int main()
{
    char nama[10];
    int jkarakter;

    cout << "Masukan sebuah kata = " << nama;
    jkarakter = strlen(nama);
    cout << "kata" << nama;
    cout << "memiliki" << jkarakter << "karakter" << endl;
}