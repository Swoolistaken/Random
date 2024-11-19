#include <iostream>
#include <string>
using namespace std;

int main()
{
    string usernamebenar="afifah";
    string passwordbenar="004";
    string username,password;
    int seblak=12000,ayamgeprek=15000,baksomercon=10000;
    int pisang=7000,kuebalok=10000,kuepukis=8000;
    int keju=3000,coklat=2000,matcha=4000;
    int menu,totalbayar,totalbayarsetelahdiskon;
    int jumlahseblak=0,jumlahayamgeprek=0,jumlahbaksomercon=0;
    int jumlahpisang=0,jumlahkuebalok=0,jumlahkuepukis=0;
    int jumlahkeju=0,jumlahmatcha=0,jumlahcoklat=0;
    float diskon=0.1;
    char choice;
    bool exitprogram=false;
    int totalsemua = 0;

    cout<<"========= [HALAMAN LOGIN] =========\n";
    cout<<"Masukan Username        :";cin>>username;
    cout<<"Masukan Password        :";cin>>password;
    cout<<"\n===================================\n";
    if (username == usernamebenar && password == passwordbenar){
        cout<<"Login Berhasil!!\n";}
    else {
        cout<<"Username atau Password Yang Anda Masukan Salah!";
        return 0;
    }

    do {
        cout<<"*----------------------------------\n";
        cout<<"|       Pilihan Menu Makanan      |\n";
        cout<<"|---------------------------------|\n";
        cout<<"|1. Menu Makanan Pedas            |\n";
        cout<<"|2. Menu Makanan Manis            |\n";
        cout<<"|3. Keluar                        |\n";
        cout<<"*---------------------------------*\n";
        cout<<"Pilihan Menu:";cin>>menu;

        switch(menu) {
            case 1:
                cout<<"==== Daftar Makanan Pedas ====\n";
                cout<<"1. seblak        - Rp.12.000\n";
                cout<<"2. Ayam Geprek   - Rp.15.000\n";
                cout<<"3. Bakso Mercon  - Rp.10.000\n";
                cout<<"\nMasukan Jumlah Pesanan seblak    :";cin>>jumlahseblak;
                cout<<"Masukan Jumlah Pesanan Ayam Geprek :";cin>>jumlahayamgeprek;
                cout<<"Masukan Jumlah Pesanan Bakso Mercon:";cin>>jumlahbaksomercon;
                
                totalbayar = jumlahseblak*seblak + jumlahayamgeprek*ayamgeprek + jumlahbaksomercon*baksomercon;
                totalbayarsetelahdiskon = totalbayar - (totalbayar * diskon);
                
                cout<<"Total Bayar Sebelum Diskon: Rp "<<totalbayar<<endl;
                if(totalbayar > 50000) {
                    cout<<"Total Bayar Setelah Diskon: Rp "<<totalbayarsetelahdiskon<<endl;
                    totalsemua += totalbayarsetelahdiskon;
                } else {
                    cout<<"Total Bayar: Rp "<<totalbayar<<endl;
                    totalsemua += totalbayar;
                }
                break;

            case 2:
                int totalbayarmakananmanis = 0;
                int totalbayarmakananmanissetelahdiskon = 0;
                
                cout<<"==== Daftar Makanan Manis ====\n";
                cout<<"1. Pisang        - Rp.7.000 \n";
                cout<<"2. Kue Balok     - Rp.10.000\n";
                cout<<"3. Kue Pukis     - Rp.8.000 \n";
                cout<<"========= DAFTAR TOPPING ========\n";
                cout<<"1. Keju              - Rp.3.000 \n";
                cout<<"2. Coklat            - Rp.2.000 \n";
                cout<<"3. Matcha            - Rp.4.000 \n";
                cout<<"4. Tanpa topping     - Rp.0     \n";
                
                // Pisang
                cout<<"Masukan Jumlah Pesanan Pisang   :";cin>>jumlahpisang;
                if (jumlahpisang >= 1) {
                    cout<<"Apakah Anda ingin Menggunakan Topping? (y/n):";cin>>choice;
                    if(choice == 'y') {
                        cout<<"Pilih Topping Yang Anda Inginkan"<<endl;
                        cout<<"Keju:";cin>>jumlahkeju;
                        cout<<"Coklat:";cin>>jumlahcoklat;
                        cout<<"Matcha:";cin>>jumlahmatcha;
                    }
                }
                totalbayarmakananmanis += jumlahpisang*pisang + jumlahkeju*keju + jumlahcoklat*coklat + jumlahmatcha*matcha;

                // Kue Balok
                cout<<"Masukan Jumlah Pesanan Kue Balok:";cin>>jumlahkuebalok;
                if (jumlahkuebalok >= 1) {
                    cout<<"Apakah Anda ingin Menggunakan Topping? (y/n):";cin>>choice;
                    if(choice == 'y') {
                        cout<<"Pilih Topping Yang Anda Inginkan"<<endl;
                        cout<<"Keju:";cin>>jumlahkeju;
                        cout<<"Coklat:";cin>>jumlahcoklat;
                        cout<<"Matcha:";cin>>jumlahmatcha;
                    }
                }
                totalbayarmakananmanis += jumlahkuebalok*kuebalok + jumlahkeju*keju + jumlahcoklat*coklat + jumlahmatcha*matcha;

                // Kue Pukis
                cout<<"Masukan Jumlah Pesanan Kue Pukis:";cin>>jumlahkuepukis;
                if (jumlahkuepukis >= 1) {
                    cout<<"Apakah Anda ingin Menggunakan Topping? (y/n):";cin>>choice;
                    if(choice == 'y') {
                        cout<<"Pilih Topping Yang Anda Inginkan"<<endl;
                        cout<<"Keju:";cin>>jumlahkeju;
                        cout<<"Coklat:";cin>>jumlahcoklat;
                        cout<<"Matcha:";cin>>jumlahmatcha;
                    }
                }
                totalbayarmakananmanis += jumlahkuepukis*kuepukis + jumlahkeju*keju + jumlahcoklat*coklat + jumlahmatcha*matcha;

                totalbayarmakananmanissetelahdiskon = totalbayarmakananmanis - (totalbayarmakananmanis * diskon);
                
                cout<<"Total Bayar Sebelum Diskon: Rp "<<totalbayarmakananmanis<<endl;
                if(totalbayarmakananmanis > 50000) {
                    cout<<"Total Bayar Setelah Diskon: Rp "<<totalbayarmakananmanissetelahdiskon<<endl;
                    totalsemua += totalbayarmakananmanissetelahdiskon;
                } else {
                    cout<<"Total Bayar: Rp "<<totalbayarmakananmanis<<endl;
                    totalsemua += totalbayarmakananmanis;
                }
                break;

            case 3:
                exitprogram = true;
                cout<<"Terimakasih! Total Semua Yang Perlu Dibayar Rp "<<totalsemua<<endl;
                break;

            default:
                cout<<"Pilihan Tidak Valid Silahkan Coba Lagi"<<endl;
                break;
        }
    } while(!exitprogram);
    return 0;
}
