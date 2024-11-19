#include <iostream>
using namespace std;
 string pil;
int suhu();
int lingkaran();
void menu();
int main(){
    int menuu;
    do{
    menu();
    cout<<"Pilih Menu :";cin>>menuu;
    switch (menuu){
        case 1:
        suhu();
        break;
        case 2:
        lingkaran();
        break;
        case 3:
        cout<<"Terimakasih Sudah Menggunakan Program Ini :D";
        return 0;
        default:
        cout<<"Input Invalid\n";
        system("pause");
        return 0;
        

        

    }
    do
    {
    cout<<"apakah anda ingin kembali ke menu?(y/n)";cin>>pil;
    } while (pil!="y"&& pil !="n");
    
        

    }while(pil=="y");

    
}
void menu (){
    cout<<"\tMenu Utama \n";
    cout<<"1. Konversi Suhu\n";
    cout<<"2. Hitung Luas Dan Keliling Lingkaran\n";
    cout<<"3. Keluar\n";
    
    

}
int suhu(){
    string konv;
   
    float c,f,drjt;
    do{
    cout<<"Konversi ke (C)elsius atau (F)ahrenheit?";cin>>konv;
    if (konv=="C"||konv=="c"){
    cout<<"Masukan Suhu (Dalam Fahrenheit)";cin>>drjt;
    c=(drjt-32)*5/9;
    cout<<"Suhu "<<c;}
    else if (konv=="F"||konv=="f"){
    cout<<"Masukan Suhu (Dalam Celsius)";cin>>drjt;
    f=32+(drjt*1.8);
    cout<<"Suhu "<<f;
    }else cout<<"Pilihan Tidak Valid";
    

        
    cout<<"\nApakah anda ingin mengonversi lagi? (y/n)";cin>>pil;
    
}
    
    while(pil=="y");
    


}
int lingkaran(){
    do{
float r,L,K;
cout<<"Input Jari-Jari:";cin>>r;
cout<<"Hasil\n";
L=3.14*r*r;
K=3.14*r*2;
cout<<"Luas Lingkaran Adalah:"<<L<<endl;
cout<<"Keliling Lingkaran Adalah:"<<K<<endl;
cout<<"Apakah Ingin Menghitung Lingkaran Lagi??(y/n)";cin>>pil;}
while(pil=="y");


   
}

