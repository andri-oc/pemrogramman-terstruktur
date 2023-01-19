
#include <stdlib.h>
#include<iostream>
using namespace std;





int main()
{
   int pilihan;

   do
   {
      cout << "\t=============================================" << endl;
      cout << "\t                STUDIO XXI " << endl;
      cout << "\t=============================================" << endl;
      cout << "\t      DAFTAR MENU ";
      cout << endl;
      cout << "\t---------------------------------" << endl;
      cout << "\t| 1. PEMBELIAN TIKET            |" << endl;
      cout << "\t| 2. KELUAR \t		|" << endl;
      cout << "\t---------------------------------" << endl;
      cout << "\t=============================================" << endl;
      cout << endl;

      cout << "\t MASUKAN PILIHAN ANDA  (1-2) : ";
      cin >> pilihan;
      cout << endl;
      system("clear");




      // PILIHAN
      switch (pilihan)
      {
      case 1:
         int dfilm;
         cout << "\t DAFTAR FILM HARI INI" << endl;
         cout << "\t =============================================" << endl;
         cout << "\t |1. AVATAR 2       " << endl;
         cout << "\t |2. GHOST WRITER 2" << endl;
         cout << "\t |3. BLACK ADAM     " << endl;
         cout << "\t |4. THE DOLL 3     " << endl;
         cout << "\t |5. MORBIUS       " << endl;
         cout << "\t =============================================" << endl;
         cout << "\t Masukan Daftar film =  ";
         cin >> dfilm;
         cout << endl << endl;





         if (dfilm == dfilm)
         {
            int jenisTKT, jumlahTKT, totalTKT;
            char ulang, belanjaKmbln;

            cout << "\t =============================================" << endl;
            cout << "\t   PEMBELIAN TIKET ";
            cout << endl;
            cout << "\t =============================================" << endl;
            cout << "\t KETERANGAN" << endl;
            cout << "\t 1. TIKET REGULER  : Rp. 20.000" << endl;
            cout << "\t 2. TIKET PREMIUM  : Rp. 35.000" << endl;
            cout << "\t =============================================" << endl;

            cout << "\t INPUT PEMBELIAN TIKET" << endl;
            cout << "\t JENIS TIKET (1-2)  : ";
            cin >> jenisTKT;
            cout << "\t JUMLAH TIKET   : ";
            cin >> jumlahTKT;
            cout << endl;
            cout << "\t =============================================" << endl;

            if (jenisTKT == 1)
            {
               totalTKT = jumlahTKT * 35000;
            }
            else if (jenisTKT == 2)
            {
               totalTKT = jumlahTKT * 20000;
            }
            else

            {
               cout << "\t TIDAK ADA PILIHAN TERSEBUT";
               cout << endl;
            }

            cout << "\t JENIS TIKET   : " << jenisTKT << endl;
            cout << "\t JUMLAH TIKET   : " << jumlahTKT << endl;
            cout << "\t ---------------------------------------------" << endl;
            cout << "\t TOTAL BAYAR   : Rp. " << totalTKT << endl;
            cout << "\t ==============================================" << endl;
            cout << endl << endl;
         }
         else
         {
            cout << "\t tidak ada pilihan tersebut";
         }

         int KursiTerisi[2], kursiKSONG[2], angka;
         cout << "\t ==============================================" << endl;
         cout << "\t Cek Sisa Kursi ";
         cout << endl;
         cout << "\t ==============================================" << endl;
         cout << "\t Keterangan" << endl;
         cout << "\t Jumlah Kursi Di Bioskop sebangak 50 Kursi" << endl;
         cout << "\t ==============================================" << endl;
         cout << "\t Input Jumlah Kursi Yang Ingin Dipesan" << endl;

         angka = 0;

         do
         {
            cout << "\t Jumlah Pemesanan Kursi  : ";
            cin >> KursiTerisi[angka];
            angka++;

         } while (angka < 1);

         for (angka = 0; angka < 1; angka++)
            kursiKSONG[angka] = 50 - KursiTerisi[angka];

         cout << "\t ==============================================" << endl;
         for (angka = 0; angka < 1; angka++)

         {
            cout << "\t Sisa Kursi   : " << kursiKSONG[angka];
            cout << endl;
            cout << "\t ==============================================" << endl;
            cout << endl << endl;
         }
         break;
      }
   } while (pilihan != 2);
   return 0;
}
