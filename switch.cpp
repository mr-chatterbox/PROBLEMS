#include<iostream>
using namespace std;

int main(){

    int num = 1;

    cout << endl;
    switch( num ){

        case 1: cout << "First" << endl;
            break;

        case 2: cout << "second" << endl;
            break;
            
        default: cout << "Default" << endl;
            break;
    }
        cout << endl;

        return 0;
}