#include <iostream>
using namespace std;

int main() {
/*
    int *p;
    cout << *p << endl;
*/
/*
    int i = 5;
    int *q = &i;
    cout << *q << endl;
    cout << q << endl;

    int *p = 0;
    p = &i;
    cout << *p << endl;
    cout << p << endl;
*/

    int num = 5;
    int a = num;
    a++;

    cout << "num: " << num << endl;

    int *p = &num;
    cout << "Before " << num << endl;
    (*p)++;
    cout << "After" << num << endl;


    return 0;  
}