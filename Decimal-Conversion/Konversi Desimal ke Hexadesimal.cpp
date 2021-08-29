#include <iostream>
using namespace std;

void Hexadesimal(int Desimal){
    if (Desimal>1) {
    Hexadesimal(Desimal/16);
    }
    cout<<Desimal%16;
}

int main() {
    int Desimal;
    cout <<"Masukkan Bilangan Desimal: ";
    cin >> Desimal;
    cout <<"Dalam Hexadesimal adalah: ";
    Hexadesimal(Desimal);
    cout<<endl;
    return 0;
}
