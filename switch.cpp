#include <iostream>
using namespace std;

int main(
){
    int menu;
    int harga = 0;
    int jumlah_tiket = 0;
    int total_bayar=0;

    cout<< "SELAMAT DATANG DI JATIM PARK \n" ;
    cout<< "Paket 1\n";
    cout<< "Paket 2\n";
    cout<< "Paket 3\n";

    cout<<"Pilih Menu:";
    cin>> menu;
    cout<< endl;

    switch (menu) {
        case 1 :
        cout<<" Paket 1 \n";
        harga = 100000;
        break;
        // fungsi break untuk berenti ngecek kondisi
        case 2:
        cout << "Paket 2 \n";
        harga = 120000;
        break;
        case 3:
        cout << "Paket 3\n";
        harga = 130000;
        break;
        default:
        harga=0;
        cout<<"menu tidak tersedia\n";

    }
    cout<<"jumlah tiket:";
    cin>>jumlah_tiket;
    total_bayar= jumlah_tiket*harga;
    cout<<"total bayar:"<<total_bayar;
    return 0;



    
    
    
    
}