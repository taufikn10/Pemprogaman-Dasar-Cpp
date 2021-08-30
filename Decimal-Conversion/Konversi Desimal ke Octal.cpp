
#include <iostream>
#include <conio.h>
using namespace std;
unsigned int Desimal,Octal;

void konversi(unsigned int Desimal){
if (Desimal>1) {
    konversi(Desimal/8);}
    Octal=Desimal%8;
    cout<<Octal<<"";
}
int main ()
{

    cout <<"Masukkan Bilangan Desimal: ";
    cin>>Desimal;
    cout <<"Dalam Oktal adalah: ";
    konversi(Desimal);
    cout << endl << endl;
    getch();
}
