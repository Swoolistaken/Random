#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;
int x;
int a (int x){
    int hasil;
    hasil=x*x;
    
    return hasil;}
    



int main(){
    string str;
    cout<<"Masukan String\n";getline (cin>>ws,str);
    reverse(str.begin(), str.end());
    cout<<""<<str;


}