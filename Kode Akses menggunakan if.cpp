#include <iostream>
using namespace std;

int main(){
	
	int kode_akses_baru, kode_akses, a;
	
	cout << "Selamat Datang di Akses Informasi Perusahaan Erki" << endl;
	cout << "=================================================" << endl;
	
	cout << "Kode akses baru : ";
	cin >> kode_akses_baru;
	
	cout << "Kode akses baru tersimpan, terima kasih" << endl;
	cout << " " << endl;
	cout << "Masukan kode akses anda : ";
	cin >> kode_akses;
	
	if (kode_akses_baru == kode_akses){
		cout << "Selamat Datang di Database Perusahaan Erki\n";
		cout << "==========================================\n";
		cout << "Surat rahasia\n";
		cout << "Terdata bahwa Perusahaan ini memiliki +10000 aura dan ketuanya sering mewing pas tidur\n";
	} else{
		cout << "Kode akses salah, mohon diulangi dari awal\n";
	}
	
	cout << " " << endl;
	cout << "tekan 1 untuk keluar : ";
	cin >> a;
	
	return 0;
}