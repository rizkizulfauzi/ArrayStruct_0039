#include <iostream>
using namespace std;

struct DetailAlamat
{
  string kota;
  string provinsi;  
};

struct Mahasiswa
{
string nama;
string nim;
DetailAlamat alamat;
};

int main()
{
    Mahasiswa mhs[12];
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim-";
        cin >> mhs[i].nim;
        cout << "Masukan Nama =";
        cin >> mhs[i].nama;
        cout << "Masukan kotan =";
        cin >> mhs[i].alamat.kota;
        cout << "Masukan provinsi =";
        cin >> mhs[i].alamat.provinsi;
    }
    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Mahasiswa ke-" << i +1 << endl;
        cout << "NIM = " <<mhs[i].nim <<endl;
        cout << "Nama =" <<mhs[i].nama <<endl;
        cout << "kota =" <<mhs[i].alamat.kota;
        cout << "Provinsi =" <<mhs[i].alamat.provinsi;
    }
}