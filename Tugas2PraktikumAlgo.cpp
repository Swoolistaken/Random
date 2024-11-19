#include <iostream>
using namespace std;

int main() {
    string username = "Anno";
    string password = "139";
    int faktor = 0;
    string us, pw;
    bool mainmenu = false;
    string choice;
    int num, numA;
    bool exitprogram = false;
    int total;
    int o = 1;

    cout << "===============\n";
    cout << "   Welcome!\n";
    cout << " Please Login! \n";
    cout << "===============\n";

    do {
        cout << "Masukan Username: "; cin >> us;
        cout << "Masukan Password: "; cin >> pw;

        if (us == username && pw == password) {
            cout << "================\n";
            cout << "Welcome !!\n";
            cout << username << " || " << password << endl;
            cout << "================\n";
            mainmenu = true;

            do {
                cout << "Main Menu:\n";
                cout << "1. Arithmetic Progression\n";
                cout << "2. Factor Number\n";
                cout << "3. Exit\n";
                cout << "Choice: "; cin >> choice;

                if (choice == "1") {
                    cout << "Input Number (>0): ";
                    cin >> num;
                    total = num;

                    cout << "\t\tStart Total: " << num << endl;
                    while (num > 0) {
                        if (num % 3 == 0) {
                            numA = num - 3;
                            total += numA;
                            cout << num << " - 3 = " << numA << "\t || Total: " << total << endl;
                            num = numA;
                        } 
                        else if (num % 3 == 1) {
                            numA = num + 1;
                            total += numA;
                            cout << num << " + 1 = " << numA << "\t || Total: " << total << endl;
                            num = numA;
                        } 
                        else if (num % 3 == 2) {
                            numA = num / 6;
                            total += numA;
                            cout << num << " / 6 = " << numA << "\t || Total: " << total << endl;
                            num = numA;
                        }
                    }
                } 
                else if (choice == "2") {
                    cout << "\t\t~ Factor Number ~" << endl;
                    cout << "Input Number (>0): "; cin >> num;
                    if (num <= 0) {
                        cout << "Masukan Angka Yang Lebih Besar Dari 0!\n";
                        continue;
                    }

                    faktor = 0; 
                    for (int i = 1; i <= num; i++) {      
                        if (num % i == 0) {
                            cout << num << " is divisible by " << i << endl;
                            faktor++;
                        }
                    }
                    cout << "\nFactors: " << faktor << "\n";
                    if (faktor == 2) {
                        cout << num << " Adalah Bilangan PRIMA\n";
                    } else {
                        cout << num << " Bukan Bilangan PRIMA\n";
                    }
                } 
                else if (choice == "3") {
                    cout << "Terimakasih Telah Menggunakan Program ini!\n";
                    return 0;
                } 
                else {
                    cout << "Pilihan tidak valid, silakan coba lagi.\n";
                }

                cout << "Do you want to go back to the main menu? (y/n): ";
                cin >> choice;
                if (choice == "y" || choice == "Y") {
                    mainmenu = true;
                } else {
                    mainmenu = false;
                    exitprogram = true;
                }

            } while (mainmenu && !exitprogram);
        } 
        else { 
            cout << "Username / Password yang anda masukan salah (" << o << "x)\n";
            o++;
        }

    } while (o <= 3);

    cout << "Anda Sudah 3x Salah Memasukkan Password atau Username. Coba Lagi Lain Kali!\n";
    return 0;
}
