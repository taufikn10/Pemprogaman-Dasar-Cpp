#include <iostream>
using namespace std;

void konversi(unsigned Desimal);
unsigned Desimal,Biner;

int main(){
    cout << "masukkan bilangan Desimal ke Biner: " << endl;
    cin >> Desimal;
    konversi(Desimal);
}

void konversi(unsigned Desimal){
    if(Desimal>1){
    konversi(Desimal/2);
    }
    Biner = Desimal%2;
    cout << Biner;
}
