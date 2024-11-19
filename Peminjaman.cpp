#include <iostream>
using namespace std;
int main(){
int pilihan;
string nama;
string tanggal,kondisi;
int NIM;
    cout<<"==PERPUSTAKAAN==\n";
    cout<<"1.Meminjam Buku\n";
    cout<<"2.Mengembalikan Buku\n";

    cout<<"Input pilihan 1/2:";cin>>pilihan;

    switch(pilihan){
        case 2:
        cout<<"masukan nama:";cin>>nama;
        cout<<"masukan NIM:";cin>>NIM;
        cout<<"Masukan tanggal pengembalian (dd/mm/yyyy)";cin>>tanggal;
        
        cout<<"Buku dalam kondisi baik atau tidak (y/n)";cin>>kondisi;
        if(kondisi=="y")
        cout<<"Terimakasih Telah Mengembalikan buku dalam kondisi baik\n";
        else
        cout<<"Anda Harus membayar denda sesuai kerusakan\n";
break;
        case 1:
         cout<<"masukan nama:\n";cin>>nama;
        cout<<"masukan NIM:\n";cin>>NIM;
        cout<<"Masukan tanggal Peminjaman (dd/mm/yyyy)\n";cin>>tanggal;
        cout<<"Buku Berhasil Dipinjam oleh "<<nama<<"(NIM:"<<NIM<<")"<<"Pada Tanggal "<<tanggal;
break;
        default:
    
    pilihan=0;
    cout<<"Pilihan tidak valid silahkan pilih opsi 1 atau 2";







    }


}