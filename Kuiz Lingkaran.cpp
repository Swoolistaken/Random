#include <iostream>
using namespace std;
#define phi 3.14

int main(){
string Nama,NIM;
float L,r;

cout<<"\t Yuk Kita Kuis";
cout<<"\nNamamu:";getline(cin>>ws, Nama);
cout<<"NIM:";cin>> NIM;
cout<<"\n Hai "<<Nama<<",NIM:"<<NIM;

cout<<"\n\t Yuk Hitung Luas Lingakaran";
cout<<"\n Jari-jari:";cin>>r;
L=phi*r*r;
cout<<"Luas Lingkaran="<<L;
}