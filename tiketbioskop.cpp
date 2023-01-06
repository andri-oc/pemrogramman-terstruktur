#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
   int pilihan;

   do
   {
      cout << "STUDIO XXI" << endl;
      cout << "==================" << endl;
      cout << "DAFTAR MENU" << endl;

      cout << "1. PEMBELIAN TIKET" << endl;
      cout << "2. keluar" << endl;
      cout << "=======================" << endl;
      cout << "MASUKAN PILIHAN ANDA (1-2) : ";
      cin >> pilihan;
      cout << endl;

      system("clear");

      switch (pilihan)
      {
      case 1:
         int dfilm;
         cout << "DAFTAR FILM HARI INI" << endl;
         cout << "=======================" << endl;
         cout << "1. AVATAR 2" << endl;
         cout << "2. GHOST WRITER 2" << endl;
         cout << "3. BLACK ADAM" << endl;
         cout << "4. THE DOLL 3" << endl;
         cout << "5. MORBIUS" << endl;
         cout << "======================" << endl;
         cout << "MASUKAN DAFTAR FILM : ";
         cin >> dfilm;

         if (dfilm == dfilm)
         {
            int jenisTKT, jumlahTKT, totalTKT;

            cout << "===============================" << endl;
            cout << "PEMBELIAN TIKET";
            cout << endl;

            cout << "===============================" << endl;
            cout << "KETEEANGAN" << endl;
            cout << "1. TIKET REGULER : 20.000" << endl;
            cout << "2. TIKET PREMIUM : 40.000" << endl;
            cout << "===============================" << endl;

            cout << "INPUT PEMBELIAN TIKET ";
            cout << "PILIH JENIS TIKET (1-2) : ";
            cin >> jenisTKT;
            cout << "PILIH JUMLAH TIKET : " << endl;
            cin >> jumlahTKT;
            cout << endl;
            cout << "================================" << endl;



         }
      }

   } while (/* condition */);

   return 0;
}