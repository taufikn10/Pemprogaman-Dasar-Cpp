#include <iostream>
using namespace std;
int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Nama	: TAUFIK NURRAHMAN\n";
    cout << "Nim	: 19051397019\n";
    cout << "Prodi	: D4 Manajemen Informatika A\n";
    cout << "-------|Universitas Negeri Surabaya|-------\n";
    cout << "==================================================\n";
    cout << "\t\tPROGRAM CALCULATOR\t\t\n";
    cout << "'+'= Penjumlahan \n";
    cout << "'-'= Pengurangan \n";
    cout << "'*'= Perkalian \n";
    cout << "'/'= Pembagian \n";
    cout << "==================================================\n";
    // memasukan input dari user
    cout << "input angka pertama: ";
    cin >> a;
    cout << "pilih operator +,-,/,*,: ";
    cin >> aritmatika;
    cout << "input nilai kedua: ";
    cin >> b;

    cout << "\nHasil Perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '+'){
        hasil = a+b;
    } else if (aritmatika == '-'){
        hasil = a-b;
    } else if (aritmatika == '/'){
        hasil = a/b;
    } else if (aritmatika == '*'){
        hasil = a*b;
    } else {
        cout << "operator salah" << endl;
    }

    cout << " = " <<  hasil << endl;

    cin.get();
    return 0;
}


