#include <iostream>
using namespace std;

void fungsi (int *b){
    cout << "address b"<< b << endl;
    cout << "nilai b" << *b <<endl;//deferencing
}

void kuadrat (int *valPtr){
    *valPtr = (*valPtr)*(*valPtr);
}

int main(){
    int a = 5;
    cout << "address a"<< &a << endl;
    cout << "nilai a" << a << endl;

    //fungsi(&a); // Fungsi dengan input pointer
    kuadrat(&a);
    cout << "nilai a" << a << endl;

    cin.get();
    return 0;
}
