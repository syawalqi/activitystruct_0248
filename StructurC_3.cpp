#include<iostream>
using namespace std;
#include <string>

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};


int main() {
	mahasiswa  mhs;
	cout << "Nomor mahasiswa : ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);

}