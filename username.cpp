#include <iostream>
using namespace std;
int main(){

string us,pw;
string username="Anno";
string password="139";
bool exitrprogram=false;
do{
cout<<"Input Username";cin>>us;
cout<<"Input Password";cin>>pw;

if(us==username && pw==password){
cout<<"Login Berhasil";
return 0;}
 else if (pw != password){
cout<<"Password salah";}
 else if (us != username ){
cout<<"Username Tidak Ditemukan";}
}while (true);






}