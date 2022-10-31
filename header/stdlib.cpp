#include <string>
#include <iostream>
#include <cstring> //note: ‘strlen’ is defined in header ‘<cstring>’; did you forget to ‘#include <cstring>’
#include <stdlib.h>
using namespace std;

int main()
{
    char nama[10];
    int jumlah_karakter;

    cout << "Masukan sebuah kata = ";
    cin >> nama;
    // system("CLS");
    system("clear"); // Dikarenakan saya menggunakan GNU linux (ubuntu), untuk membersihkan layar menggunakan command clear
    jumlah_karakter = strlen(nama);
    cout << "kata " << nama;
    cout << " memiliki " << jumlah_karakter << " karakter" << endl;
}