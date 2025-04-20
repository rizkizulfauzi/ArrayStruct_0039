#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    Mahasiswa mhs[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Mahasiswa ke-" << i +1 <, endl;
        cout << "Masukan nim =";
        cin >> mhs[i].nim;
        cout << "Masukan alamat = ";
        cin >> mhs[i].alamat;
    }

    cout << endl;
    cout << "Menampilkan Data " << endl;
    cout << endl;
    for (int i =0; i <4; i++)
    {
        cout << " Mahasiswa ke- " << i +1 << endl;
        cout << "NIM" << mhs[i].nim;
        cout << "Nama" << mhs[i].nama;
        cout << "Alamat" << mhs[i].alamat <<endl;

    }
}