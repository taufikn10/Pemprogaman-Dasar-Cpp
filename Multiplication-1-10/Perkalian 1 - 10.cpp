#include <iostream>
using namespace std;

int main(){

	int i,n,batas=10,jumlah;
	menu:
    cout << "Nama	: TAUFIK NURRAHMAN\n";
    cout << "Nim	: 19051397019\n";
    cout << "Prodi	: D4 Manajemen Informatika A\n";
    cout << "-------|Universitas Negeri Surabaya|-------\n";
    cout << "==================================================\n";
    cout << "\t\tPROGRAM PERKALIAN 1-10\t\t\n";
	cout<<"\n\n";
	cout<<"masukkan agka yang ingin dikalikan\n";
	cin>>n;
	cout<<"maka....\n\n";

	for(i=1;i<=batas;i++){
		jumlah=i*n;
		cout<<i<< " x " <<n<<" = "<<jumlah<<endl;
	}
	return 0;

}
