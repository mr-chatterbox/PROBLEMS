#include <iostream>
using namespace std;

int main() {

    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;

    cout << "Before " << t << endl;
    t = t+1;
    cout << "After " << t << endl;

    return 0;

}