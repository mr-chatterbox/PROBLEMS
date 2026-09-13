#include <iostream>
using namespace std;

int main(){

    int arr[10];

    cout << "Address of first element: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first element: " << &arr[0] << endl;
    

    return 0;
}