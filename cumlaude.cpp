#include <iostream>
using namespace std;
int main(){ // cumlaude lulus maks 4 thn dan ipk diatas 3.5
float tahun,ipk;
    
cout<<"masukan Tahun=";cin>> tahun;
cout<<"masukan IPK=";cin>> ipk;
if (tahun>4 ){
    cout<<"Anda lulus dengan IPK:"<<ipk;
}

else {
    if(ipk>= 3.5 ){cout <<"Anda lulus dengan predikat cumlaude dengan ipk:"<<ipk;}
    
    else if (ipk >=3) {cout<<"anda lulus predikat terpuji  dengan IPK:"<<ipk;
    
    }
    else{cout<<"anda lulus dengan IPK:"<<ipk;}
}
    cout<<"\nSelesai";
    }


   
