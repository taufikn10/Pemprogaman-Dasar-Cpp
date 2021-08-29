#include <iostream>
using namespace std ;

int perkalian (int a, int b) {
	return a * b ;

}

int panjangInt(int aConst) {
	int berapa = 0;

	while (aConst != 0) {
		aConst /= 10;
		berapa++;
	}
	return berapa;

}

int main () {
    int a, b;
    cout << "Nama	: TAUFIK NURRAHMAN\n";
    cout << "Nim	: 19051397019\n";
    cout << "Prodi	: D4 Manajemen Informatika A\n";
    cout << "-------|Universitas Negeri Surabaya|-------\n";
    cout << "==================================================\n";
    cout << "\t\tPERKALIAN SUSUN\t\t\n";
	cout << "Angka pertama = " ; cin >> a ;
	cout << "Angka kedua   = " ; cin >> b ;

	int berapa = panjangInt(a);
	int berapaB  = panjangInt(b);
	int berapaHasil = panjangInt(perkalian(a, b));
	int panjang = berapaB > berapa ? berapaB : berapa;
	int panjangHasil = panjang < berapaHasil ? berapaHasil - panjang : 0;
 	for(int j = 0; j < panjangHasil; j++) {
    cout << " ";

	 }

	for(int i = 0; i < berapaB - berapa; i++) {
    cout << " ";

	}
    cout << a << endl ;
	for(int j = 0; j < panjangHasil; j++) {
    cout << " ";

	 }

	for(int i = 0; i < berapa - berapaB; i++) {
    cout << " ";
	}

	cout << b << endl ;

	for(int j = 0; j < panjangHasil; j++) {
    cout << "_";
	 }

	for(int i = 0; i < panjang; i++) {
    cout << "_";
	}

	cout <<"x"<< endl ;
    cout << perkalian(a, b);

}
