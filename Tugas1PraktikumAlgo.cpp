#include <iostream>
#include <string>
using namespace std;

int main() {
    string usernamebenar = "afifah";
    string passwordbenar = "004";
    string username, password;
    float seblak = 12000, ayamgeprek = 15000, baksomercon = 10000;
    float pisang = 7000, kuebalok = 10000, kuepukis = 8000;
    float keju = 3000, coklat = 2000, matcha = 4000;
    int menu, totalbayar = 0, totalbayarmakananmanis = 0;
    float stlhdiskon, diskon = 0.1;
    int jumlahseblak = 0, jumlahayamgeprek = 0, jumlahbaksomercon = 0;
    int jumlahpisang = 0, jumlahkuebalok = 0, jumlahkuepukis = 0;
    int topping;
    char choice;
    bool exitprogram = false;
    float totalsemua = 0;

    // Variabel tambahan untuk menampung harga dengan diskon
    float totalbayarmakananmanissetelahdiskon = 0;
    // Variabel topping
    int hargaToppingPisang = 0, hargaToppingBalok = 0, hargaToppingPukis = 0;

login:
    cout << "\n========= [HALAMAN LOGIN] =========\n";
    cout << "Masukan Username        : "; cin >> username;
    cout << "Masukan Password        : "; cin >> password;
    cout << "\n===================================\n";
    if (username == usernamebenar && password == passwordbenar) {
        cout << "Login Berhasil!!\n";
    } else {
        cout << "Username atau Password Yang Anda Masukan Salah!\n";
        goto login;
    }

    do {
        cout << "*----------------------------------\n";
        cout << "|       Pilihan Menu Makanan      |\n";
        cout << "|---------------------------------|\n";
        cout << "|1. Menu Makanan Pedas            |\n";
        cout << "|2. Menu Makanan Manis            |\n";
        cout << "|3. Keluar                        |\n";
        cout << "*---------------------------------*\n";
        cout << "Pilihan Menu: "; cin >> menu;

        switch(menu) {
            case 1:
                cout << "==== Daftar Makanan Pedas ====\n";
                cout << "1. Seblak        - Rp.12.000\n";
                cout << "2. Ayam Geprek   - Rp.15.000\n";
                cout << "3. Bakso Mercon  - Rp.10.000\n";
                cout << "\nMasukan Jumlah Pesanan Seblak    : "; cin >> jumlahseblak;
                cout << "Masukan Jumlah Pesanan Ayam Geprek : "; cin >> jumlahayamgeprek;
                cout << "Masukan Jumlah Pesanan Bakso Mercon: "; cin >> jumlahbaksomercon;

                totalbayar = jumlahseblak * seblak + jumlahayamgeprek * ayamgeprek + jumlahbaksomercon * baksomercon;
                stlhdiskon = totalbayar > 50000 ? totalbayar * (1 - diskon) : totalbayar;

                cout << "Total Bayar Sebelum Diskon: Rp " << totalbayar << endl;
                if (totalbayar > 50000) {
                    cout << "Total Bayar Setelah Diskon: Rp " << stlhdiskon << endl;
                } else {
                    cout << "Total Bayar: Rp " << totalbayar << endl;
                }
                totalsemua += stlhdiskon;
                break;

            case 2:
                cout << "==== Daftar Makanan Manis ====\n";
                cout << "1. Pisang        - Rp.7.000 \n";
                cout << "2. Kue Balok     - Rp.10.000\n";
                cout << "3. Kue Pukis     - Rp.8.000 \n";
                cout << "========= DAFTAR TOPPING ========\n";
                cout << "1. Keju              - Rp.3.000 \n";
                cout << "2. Coklat            - Rp.2.000 \n";
                cout << "3. Matcha            - Rp.4.000 \n";
                cout << "4. Tanpa topping     - Rp.0     \n";

                // Pesanan Pisang
                cout << "Masukan Jumlah Pesanan Pisang: "; cin >> jumlahpisang;
                hargaToppingPisang = 0;
                if (jumlahpisang > 0) {
                    cout << "Apakah Anda ingin menggunakan topping? (y/n): "; cin >> choice;
                    if (choice == 'y'|| choice=='Y') {
                        cout << "Pilih Topping yang Anda Inginkan (1. Keju, 2. Coklat, 3. Matcha, 4. Tanpa topping): ";
                        cin >> topping;
                        hargaToppingPisang = (topping == 1 ? keju : (topping == 2 ? coklat : (topping == 3 ? matcha : 0)));
                        
                    }
                    else if (choice=='n'||choice=='N')
                    cout<<"Oke Silahkan Pilih Menu selanjutnya"<<endl;

                   
                }

                // Pesanan Kue Balok
                cout << "Masukan Jumlah Pesanan Kue Balok: "; cin >> jumlahkuebalok;
                hargaToppingBalok = 0;
                if (jumlahkuebalok > 0) {
                    cout << "Apakah Anda ingin menggunakan topping? (y/n): "; cin >> choice;
                    if (choice == 'y'|| choice=='Y') {
                        cout << "Pilih Topping yang Anda Inginkan (1. Keju, 2. Coklat, 3. Matcha, 4. Tanpa topping): ";
                        cin >> topping;
                        hargaToppingBalok = (topping == 1 ? keju : (topping == 2 ? coklat : (topping == 3 ? matcha : 0)));
                    }
                    else if (choice=='n'||choice=='N')
                    cout<<"Oke Silahkan Pilih Menu selanjutnya"<<endl;

                }

                // Pesanan Kue Pukis
                cout << "Masukan Jumlah Pesanan Kue Pukis: "; cin >> jumlahkuepukis;
                hargaToppingPukis = 0;
                if (jumlahkuepukis > 0) {
                    cout << "Apakah Anda ingin menggunakan topping? (y/n): "; cin >> choice;
                    if (choice == 'y'|| choice=='Y') {
                        cout << "Pilih Topping yang Anda Inginkan (1. Keju, 2. Coklat, 3. Matcha, 4. Tanpa topping): ";
                        cin >> topping;
                        hargaToppingPukis = (topping == 1 ? keju : (topping == 2 ? coklat : (topping == 3 ? matcha : 0)));
                    }
                    else if (choice=='n'||choice=='N')
                    cout<<"Oke Silahkan Lanjut"<<endl;

                }

                totalbayarmakananmanis = (jumlahpisang * (pisang + hargaToppingPisang)) +
                                         (jumlahkuebalok * (kuebalok + hargaToppingBalok)) +
                                         (jumlahkuepukis * (kuepukis + hargaToppingPukis));

                cout << "Total Bayar Sebelum Diskon: Rp " << totalbayarmakananmanis << endl;
                if (totalbayarmakananmanis > 50000) {
                    totalbayarmakananmanissetelahdiskon = totalbayarmakananmanis * (1 - diskon);
                    cout << "Total Bayar Setelah Diskon: Rp " << totalbayarmakananmanissetelahdiskon << endl;
                    totalsemua += totalbayarmakananmanissetelahdiskon;
                } else {
                    cout << "Total Bayar: Rp " << totalbayarmakananmanis << endl;
                    totalsemua += totalbayarmakananmanis;
                }
                break;

            case 3:
                cout << "Total Semua Pembayaran: Rp " << totalsemua << endl;
                exitprogram = true;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
                break;
        }

    } while (!exitprogram);

    cout << "Terima kasih telah menggunakan program ini!\n";
    return 0;
}
