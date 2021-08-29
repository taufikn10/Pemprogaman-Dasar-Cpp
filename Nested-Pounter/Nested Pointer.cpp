#include <iostream>
using std::cout;
using std::endl;
int main()
{
    // main process
    const int value_1 = 1000;
    const int *pointer_1 = &value_1;
    const int **pointer_2 = &pointer_1;
    // print value; //result
    cout <<   value_1   << endl; // 1000
    cout <<  *pointer_1 << endl; // 1000
    cout <<  *pointer_2 << endl; // 0x28ff1c
    cout << **pointer_2 << endl; // 1000
    // seperate result
    cout << endl << endl << endl;
    // print address; //result
    cout << &value_1   << endl; // 0x28ff1c
    cout << &pointer_1 << endl; // 0x28ff18
    cout << &pointer_2 << endl; // 0x28ff14
    return 0;
}
