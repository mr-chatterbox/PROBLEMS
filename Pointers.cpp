#include <iostream>
using namespace std;

int main(){

    int num = 5;

    cout << num << endl;

    // Address of num
    cout << "Address of num: " << &num << endl;

    int *ptr = &num;
    cout << "Address of ptr: " << ptr << endl;
    cout << "Value of ptr: " << *ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;

    cout << "Address of ptr2: " << ptr2 << endl;
    cout << "Value of ptr2: " << *ptr2 << endl;

    cout << "Size of int: " << sizeof(num) << endl;
    cout << "Size of int pointer: " << sizeof(ptr) << endl;

    

    return 0;
}