#include <iostream>
using namespace std;
int main(){
    int angka[5]={1,2,3,4,5};
   int jmlhcowo;
   
    cout<<"Mau Punya Berapa Cowo?";cin>>jmlhcowo;
    string cowo[jmlhcowo];
    for (int i=0;i<jmlhcowo;i++){
   cout<<"Masukan Nama Cowo Ke-"<<i+1<<":";cin>>cowo[i];
    }
cout<<endl<<endl;

for (int i = 0; i <jmlhcowo; i++)
{
    cout<<"Nama Cowo ke-"<<i+1<<":" <<cowo[i]<<endl;;
  
}

    
    

}