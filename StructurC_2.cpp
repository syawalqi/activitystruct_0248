#include <iostream>
using namespace std;


struct DetailAlamat {
	string desa;
	string kota;
};

struct ahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};


int main() {
	mahasiswa  mhs;
	cout << "nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
    
	cout << endl;
	cout << "\n Nim : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n alamat : ";
	cout << "\n Desa : " << mhs.alamat.desa;
	cout << "\n Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}