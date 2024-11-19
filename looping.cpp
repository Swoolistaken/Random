#include <iostream>
using namespace std;
int main() {
    int tinggi = 6;
    
    for (int i = 1; i <= tinggi; i++) { // Baris
        for (int j = 1; j <= i; j++) {   // Kolom
            cout << "+";
        }
        cout << endl; // Pindah ke baris berikutnya
    }
    return 0;
}