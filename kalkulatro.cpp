#include <iostream>
using namespace std;
int main(){
    int a,b;
    char operatorr;

    cout <<"Angka 1:";cin>>a;
    cout <<"Angka 2:";cin>>b;
    cout<<"operatorr=";cin>>operatorr;
if(operatorr== '+')
cout<<"hasil operasi:"<< a + b;
if(operatorr== '-')
cout<<"hasil operasi:"<< a - b;
if(operatorr== '*')
cout<<"hasil operasi:"<< a * b;
if(operatorr== '/')
cout<<"hasil operasi:"<< a / b;

else
cout<<"Operatorr yang dimasukkan salah";
}
