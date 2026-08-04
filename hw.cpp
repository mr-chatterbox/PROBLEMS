#include<iostream> 
using namespace std;

int main(){
// 1st Q.
/*
    int a = 9;
    if(a == 9){
        cout << "NINEY" << " ";
    }

    if(a>0){
        cout << "POSITIVE" << "";
    }
    else{
        cout << "NEGATIVE";
    }
 */
// 2nd Q.
/*
 int a = 2;
 int b = a+1;

 if ((a=3)==b){
    cout<<a;
 }
 else
 {
    cout<<a+1;
 }
*/
// 3rd Q.
/*
int a = 24;

if(a>20){
    cout << "Love" << " ";
}
else if(a == 24){
    cout << "Lovely";
}
else{
    cout << "Babbar";
}
cout<<a;
*/
// 4th Q.
/*
char ch;
cout << "Enter the character: " << endl;
cin >> ch;

if (ch>='a' && ch<='z'){
    cout << "This is Lowercase" << endl;
}
else if (ch>='A' && ch<='Z'){
    cout << "This is Uppercase" << endl;
}
else if (ch>='0' && ch<='9'){
    cout << "This is Numeric" << endl;
}
*/
// 5th Q.
int n;
cin >> n;

int i = 2;
int sum = 0;

while(i<=n){
    sum = sum + i;
    i = i + 2;
}

cout << "Sum of all even number is " << sum << endl;

}