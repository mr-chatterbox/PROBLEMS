#include<iostream>
using namespace std;

int main(){
/*
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
*/

// we can also use a NESTED SWITCH

int num = 1;

    cout << endl;
    switch( num ){

        case 'A': cout << "First" << endl;
            break;

        case 1: switch (num){
            case 1: cout << "First Again" << endl;
            break;
        }
            break;
            
        default: cout << "Default" << endl;

    }
        cout << endl;

        return 0;
}