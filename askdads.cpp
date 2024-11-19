#include <iostream>
using namespace std;
const int MAX_PEMINJAM = 100;
const int MAX_BUKU = 5;
int count=0;
string peminjam[MAX_PEMINJAM];
int nim[MAX_PEMINJAM];
int jmlhbuku[MAX_PEMINJAM];
string buku[MAX_PEMINJAM][MAX_BUKU];
int kodebuku[MAX_PEMINJAM][MAX_BUKU];
int lama[MAX_PEMINJAM][MAX_BUKU];
void show();
void menu();
int input();
void menu(){
    cout<<"+================+"<<endl;
    cout<<"|    Main Menu   |"<<endl;
    cout<<"+================+"<<endl;
    cout<<"|1. Input Data   |"<<endl;
    cout<<"|2. Show Data    |"<<endl;
    cout<<"|3. Exit         |"<<endl;
}
int main(){
    int choice;
    string pil;
   menu();
   do{
   cout<<"Pilih:";cin>>choice;string peminjam[MAX_PEMINJAM];
int nim[MAX_PEMINJAM];
int jmlhbuku[MAX_PEMINJAM];
   switch (choice){
        case 1:
        input();
        break;
        case 2:
        show();
        break;
        case 3:
        cout<<"Terimakasih Sudah Menggunakan Program Ini :D";
        return 0;
        default:
        cout<<"Input Invalid\n";
        system("pause");}
        cout<<"Apakah anda ingin kembali kem menu?(y/n)";cin>>pil;
   } while(pil=="y");
  

}
int input(){
    
    int jmlhpeminjam;
    string choice;
    do{
    cout<<"+==============+"<<endl;
    cout<<"|  INPUT DATA  |"<<endl;
    cout<<"+==============+"<<endl;

    cout<<"Input Jumlah Peminjam:";cin>>jmlhpeminjam;
  
    cout<<"\nINPUT DATA PEMINJAM"<<endl;
    for (int i = 0; i< jmlhpeminjam; i++)
    { cout<<"Input Nama Peminjam Ke-"<<count+1<<":";cin>>peminjam[count];
      cout<<"Input NIM Peminjam Ke-"<<count+1<<":";cin>>nim[count];
      do{
      cout<<"Input Jumlah Buku Yang Dipinjam peminjam Ke-"<<count+1<<":";cin>>jmlhbuku[count];
      if (jmlhbuku[count]>5)
      {cout<<"Jumlah Buku Maksimal Yang Dipinjam 5! Silahkan Input Kembali.";
      }
      
     }
      while (jmlhbuku[count]>5);
     
      if (jmlhbuku[count]>5)
      cout<<"Jumlah buku yang dipinjam tdk boleh lebih dari 5!! Silahkan input kembali";
       cout<<"\t INPUT DATA BUKU"<<endl;
       
       for (int j = 0; j <jmlhbuku[count]; j++)
       {
        cout<<"\tInput Judul Buku Ke-"<<j+1<<":";cin>>buku[count][j];
        cout<<"\tInput Kode Buku ke-"<<j+1<<":";cin>>kodebuku[count][j];
        cout<<"\tInput Lama Peminjama Buku ke-"<<i+1<<" (Dalam hari):";cin>>lama[count][j];
    
      }
      count++;
    } 
        system("pause");

    cout<<"Apakah Anda ingin menginput data lagi?(y/n)";cin>>choice;
              jmlhpeminjam++;

    } while(choice=="y");
    


    
}
void show(){
    cout<<"DATA PEMINJAM"<<endl;

    for (int i = 0; i < count; i++)
    {cout<<"Nama Peminjam Ke-"<<i+1<<":"<<peminjam[i]<<endl;
     cout<<"Nim Peminjam Ke-"<<i+1<<":"<<nim[i]<<endl;
     cout<<"Jumlah Buku ke-"<<i+1<<":"<<jmlhbuku[i]<<endl;

       cout<<"\t DATA BUKU"<<endl;
        for (int j = 0; j < jmlhbuku[i]; j++)
        { cout<<"Judul Buku ke-"<<j+1<<":"<<buku[i][j]<<endl;
          cout<<"Kode Buku ke-"<<j+1<<":"<<kodebuku[i][j]<<endl;
          cout<<"Lama Peminjaman Buku ke-"<<j+1<<":"<<lama[i][j]<<endl;

            
        }
        
    }
    


}
