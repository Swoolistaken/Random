#include <iostream>
using namespace std;
int main(){
    string us="admin";
    string pw="admin";
    const int pesanan=100;
    const int jmlh=50;
    int count=0;
    int tables=0;
    int num [pesanan]; 
 int menu  [pesanan];
 string order [pesanan][jmlh];
 int many [pesanan][jmlh];
 int price [pesanan][jmlh];
int total [pesanan][jmlh];
bool deleted[100];
int o=0;
int pil;
char home;

    
   do{
    cout<<"Silahkan Login Terlebih Dahulu\n";
    cout<<"Username:";cin>>us;
    cout<<"Password:";cin>>pw;
    
   if (us!="admin" || pw!= "admin")
{
   cout<<"Username atau Password yang anda Masukan Salah\n";
   cout<<"Anda Memiliki "<<2-o<<"Kesempatan Lagi"<<endl;
   o++;
   if (o==3)
{
cout<<"Kesempatan Login Habis";
return 0;}
}


 }while(us!="admin" || pw!= "admin");
     
     cout<<"Login Berhasil"<<endl;
     
    
   

  cout<<"\t Welcome To Main Menu \n";
  cout<<"1.) Add Order\n";
  cout<<"2.) List Order\n";
  cout<<"3.) Checkout Order\n";
  cout<<"4.) Exit\n";
 
do{
     cout<<"Select Menu:";cin>>pil;
  switch (pil)
  {
    
  case 1:
    cout<<"How Many Tables:";cin>>tables;

    for (int i = 0; i < tables; i++)
    {
        cout<<"\nTable Number:";cin>>num[i];
        cout<<"How Many Menu:";cin>>menu[i];
         for (int j = 0; j < menu[i]; j++)
         {
           
            cout<<"\nOrder:"; getline(cin>>ws,order[i][j]);
            cout<<"Many:";cin>>many[i][j];
            cout<<"Price:";cin>>price[i][j];
            total[i][j]=price[i][j]*many[i][j];
            cout<<"total:"<<total[i][j];
         }
         count++;
    }
    
    break; 
   case 2:
   cout<<"\t List Order"<<endl;
   for(int i=0;i<count;i++){
    if(deleted[i] == false){
   cout<<"No.Order: "<<i+1<<endl;
   cout<<"Table Number: "<<num[i]<<endl;

    for(int j=0;j<menu[i];j++){
    cout<<"Order: "<<order[i][j]<<endl;
    cout<<"Many:"<<many[i][j]<<endl;
    cout<<"Price:"<<price[i][j]<<endl;
    cout<<"total:"<<total[i][j]<<endl;
   }
    }
}
break;

case 3:
int selected;

cout<<"\t Checkout Order\n";
cout<<"choose your order\n";

for(int i=0;i<count;i++){
    if(deleted[i] == false){
   cout<<"No.Order: "<<i+1<<endl;
   cout<<"Table Number: "<<num[i]<<endl;}
}
   cout<<"select order";cin>>selected;
   selected-=1;
   for (int j = 0; j < menu[selected]; j++)
   {
    cout<<"Order: "<<order[selected][j]<<endl;
    cout<<"Many:"<<many[selected][j]<<endl;
    cout<<"Price:"<<price[selected][j]<<endl;
    cout<<"total:"<<total[selected][j]<<endl;
   }
   deleted[selected]=true;

   
  
  default:
    break;
  }

cout<<"Do U want To Go Back TO the Main Menu(y/n)";cin>>home;
}while(home=='y');
}