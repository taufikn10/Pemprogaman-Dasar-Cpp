#include <iostream>

using namespace std;

int main()
{
     long harga=0;
     char KodeBaju, Ukuran;
     string Merk;

     cout<<"\t== Program Cek Harga Baju ==\n\n";
     cout<<"\t== Pikipek's Shop ==\n\n";

     cout<<"Masukkan Kode Baju   : ";
     cin>>KodeBaju;

     cout<<"Masukkan Ukuran Baju : ";
     cin>>Ukuran;

     if(KodeBaju=='1'){
          Merk="IMP";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=220000;
          }
          else{
               harga=250000;
          }
     }
     else if(KodeBaju=='2'){
          Merk="Prada";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=150000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=160000;
          }
          else{
               harga=170000;
          }
     }
     else if(KodeBaju=='3'){
          Merk="Gucci";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=200000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=200000;
          }
          else{
               harga=200000;
          }
     }
     else if(KodeBaju=='4'){
          Merk="Louis Vuitton";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=300000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=300000;
          }
          else{
               harga=350000;
          }
     }
     else if(KodeBaju=='5'){
          Merk="Kick Denim";
          if(Ukuran=='S' || Ukuran=='s'){
               harga=100000;
          }
          else if(Ukuran=='M' || Ukuran=='m'){
               harga=120000;
          }
          else{
               harga=130000;
          }
     }
     else{
          Merk="Error";
          cout<<"\n== Salah Input Kode Baju ==";
     }

     cout<<"\n\nMerek Baju  = "<<Merk;
     cout<<"\nUkuran Baju = "<<Ukuran;
     cout<<"\nHarga Baju  = "<<harga;

     return 0;
}
