#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()

{

int i, n, bil, jmlgenap, jmlganjil, genap, ganjil;


jmlgenap= 0;

jmlganjil= 0;

genap= 0;

ganjil= 0;


cout<<"\n              Algoritma Untuk Menghitung Banyaknya Bilangan               \n";

cout<<"         Genap dan Ganjil Serta Total Dari Bilangan- Bilangan            \n";

cout<<"                       Dari N Buah Bilangan                               \n";

cout<<"====================================================================== \n\n\n";



cout<<"\n\n Masukkan N : ";cin>>n;

for (i=1;i<=n;i++)

{

printf("\n Masukkan Bilangan %d : ",i); cin>>bil;

if(bil%2==0)

{

jmlgenap=jmlgenap+bil;

genap=genap+1;

}

else if (bil%2==1)

{

jmlganjil=jmlganjil+bil;

ganjil=ganjil+1;

}

}


cout<<"\n==========================GANJIL===============================\n";

printf("Terdapat %d Bilangan Ganjil \n",ganjil);


cout<<"Total Penjumlahan Bilangan Ganjil: "<<jmlganjil<<"\n\n";


cout<<"\n===========================GENAP================================\n";


printf("Terdapat %d Bilangan Genap \n",genap);

cout<<"Total Penjumlahan Bilangan Genap : "<<jmlgenap<<"\n\n";


getch();
}
