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
    Mahasiswa mhs;

    cout << "Masukan nim =";
    cin >> mhs.nim;
    cout << "Masukan nama =";
    cin >> mhs.nama;
    cout << "Masukan alamat =";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Menampilkan Data " << endl;
    cout << endl;

    cout << "NIM =" << mhs.nim <<endl;
    cout << "Nama =" << mhs.nama <<endl;
    cout << "alamat" << mhs.alamat <<endl;
}