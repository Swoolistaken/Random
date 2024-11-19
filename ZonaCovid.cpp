#include <iostream>
using namespace std;

int main(){
string peningkatan,ODP,kematian;
pengisian:

    cout<<"Apakah Terdapat Peningkatan Kasus Dari Minggu Pertama ke Minggu ke 2? (y/n)  ";cin>>peningkatan;
    cout<<"Apakah Terdapat ODP?(y/n)";cin>>ODP;
    cout<<"Apakah Terdapat Kasus Kematian>(y/n)";cin>>kematian;

 if(peningkatan=="y" &&
    kematian=="y"
   && ODP=="y")
    cout<<"Kecamatan ini masuk dalam zona hitam"<<endl;
 
 else if (peningkatan=="y"
    && kematian=="n"
    && ODP=="y")
    cout<<"Kecamatan Ini masuk dalam zona Merah"<<endl;
 
 else if (peningkatan=="n" &&
    kematian=="n"
    && ODP=="y")
    cout<<"Kecamatan Ini Masuk Dalam Zona Oranye"<<endl;
 
 else if (peningkatan=="n"&&kematian=="n"
    &ODP=="n")
    cout<<"Kecamatan Ini Masuk Dalam Zona Hijau"<<endl;

    else {cout<<"Jawab Menggunakan y/n!\n";
    goto pengisian;}

    
   cout<<"Terimakasih";
 
}