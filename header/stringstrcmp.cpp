#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char string1[10];
    char string2[20];
    int hasil;
    cout << "Masukan Kata pertama = ";
    cin >> string1;
    cout << "Masukan Kata kedua = ";
    cin >> string2;

    hasil = strcmp(string1, string2);

    if (hasil = 0)
    {
        cout << " kata pertama dan kedua";
    }
    else
    {

        cout << "Kata Pertama Dan kedua berbeda" << endl;
    }
}