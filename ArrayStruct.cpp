#include <iostream>
using namespace std;

int nilai[] = {1,2,4,7};

int nilaiDua[3] ={1,2,3};

int nilaiDua[4];

string nama[4];

int main()
{
   cout << "Nilai array ke 3 = " << nilai[2] <<endl;
   nilai[2] = 100;
   cout << "Nilai array ke 3 = " << nilai[2] << endl;


   for (int i = 0; i<4; i++)
   {
    cout << "Masukan nama ke " << i + 1 << " = ";
    cin >> nama[i];
   }

   cout << endl;
   cout << "Menampilkan Array Nama" << endl;
   cout << endl;

   for (int i =0; i < 4; i++)
   {
    cout << "Nama ke " << i + 1 << " = " << nama[i] << endl;
   }
}