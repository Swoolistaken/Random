#include <iostream>
using namespace std;
int main(){
    int a,b;
    char operatorr;

    cout <<"Angka 1:";cin>>a;
    cout <<"Angka 2:";cin>>b;
    cout<<"operatorr=";cin>>operatorr;
// ? itu then kalo : baru if
    (operatorr== '+') ? cout << a + b :(operatorr== '-') ? cout<<a - b : (operatorr== '*'
    ) ? cout << a * b  : (operatorr== '/') ?cout << a/b : cout<<"Invalid ";}