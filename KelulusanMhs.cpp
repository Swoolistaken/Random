#include <iostream>
using namespace std;

int main(){
    int NIM,sks,sksp,sksE,lulus;
    float IPK,persentaseD,sksD;
    string Nama;
    cout<<"Masukan NIM anda:";cin>>NIM;
    cout<<"Masukan Nama anda:";getline (cin>>ws ,Nama);
    cout<<"Masukan Total SKS yang anda ambil:";cin>>sks;
    cout<<"Masukan Nilai IPK anda:";cin>>IPK;
    cout<<"Masukan Jumlah SKS pilihan anda:";cin>>sksp;
    cout<<"Masukan Jumlah SKS anda yang bernilai D:";cin>>sksD;
    cout<<"Masukan Jumlah SKS anda yang bernilai E:";cin>>sksE;
    cout<<"Berapa Semester anda Lulus? :";cin>>lulus;
persentaseD=sksD/sks*100;


    if(IPK> 2.24 && sks >= 144 && sksp > 15 && persentaseD < 25 && sksE==0){
        cout<<"Memenuhi Syarat Kelulusan\n";
      if(IPK> 3.50 && lulus<=8){
    cout<<"Selamat Anda Lulus Dengan Pujian dengan IPK:"<<IPK<<endl;
    cout<<"Anda Dapat Diusulkan untuk mendapatkan karya cendikia!";}
     else if (IPK> 3.00 && IPK <= 3.51 && lulus >= 8)
    cout<<"Selamat anda lulus dengan Sangat Memuaskan dengan IPK:"<<IPK;
     else if(IPK> 2.75 && IPK <= 3.00)
    cout<<"Selamat anda lulus memuaskan dengan IPK:"<<IPK;
    else 
    cout << "Selamat Anda Lulus Dengan IPK:" <<IPK<< endl;}
    
    else
    cout<<"Anda Tidak Lulus!";
    






}