#include <iostream>
using namespace std;
int main(){
    string Instansi;
    int siswa;
    int pengajar;
    int hargapaud,hargasd,hargasmp,hargasma,hargamhs;

    
    cout<<"Masukan Jumlah Siswa:";cin>>siswa;
    cout<<"Masukan Jumlah Pengajar:";cin>>pengajar;
    instansi:
    cout<<"Masukan Instansi Anda:";cin>>Instansi;

    if (Instansi=="PAUD" || Instansi=="paud"){
        hargapaud = siswa * 20 * 6000 + pengajar * 42 * 6000;
        cout<<"Yang Perlu Anda Bayar adalah Rp."<<hargapaud;}
        else if(Instansi=="SD" || Instansi=="sd"){
            hargasd = siswa * 35 * 6000 + pengajar * 42 * 6000;
            cout<<"Yang Perlu Anda Bayar adalah Rp."<<hargasd;}
            else if(Instansi=="SMP"){
                hargasmp=siswa * 35 * 6000 + pengajar * 42 * 6000;
                cout<<"Yang Perlu Anda Bayar adalah Rp."<<hargasmp;}
                else if(Instansi=="SMA"){
                    hargasma=siswa * 35 * 6000 + pengajar * 42 * 6000;
                    cout<<"Yang Perlu Anda Bayar adalah Rp."<<hargasma;}
                    else if(Instansi=="Mahasiswa"){
                        hargamhs=siswa * 20 * 6000 + pengajar * 42 * 6000;
                        cout<<"Yang Perlu Anda Bayar adalah Rp."<<hargamhs;}
                        else {
                        cout<<"Masukan Nama Instansi Yang Sesuai!\n";
                        goto instansi;}

                    

                
            


        
    

    
}


