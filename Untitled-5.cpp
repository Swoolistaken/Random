#include <iostream>
using namespace std;
int main(){
    int tahun;
    string output;
    cin>> tahun;

    (tahun % 4) ? cout<< tahun <<"adalah tahun kabisat.": cout<<tahun<<"bukan tahun kabisat.";
}