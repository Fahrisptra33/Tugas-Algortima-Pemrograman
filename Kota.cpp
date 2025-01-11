#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string kota;
    ofstream fileOut("kota.txt");  // Membuka file untuk menulis

    // Langkah 1: Menginput 3 nama kota dan merekam ke file "kota.txt"
    if (fileOut.is_open()) {
        for (int i = 1; i <= 3; ++i) {
            cout << "Masukkan nama kota ke-" << i << ": ";
            getline(cin, kota);
            fileOut << kota << endl;  // Menulis nama kota ke file
        }
        fileOut.close();  // Menutup file setelah menulis
    } else {
        cout << "Tidak dapat membuka file untuk menulis!" << endl;
        return 1;
    }

    // Langkah 2: Membaca file "kota.txt" dan mencetak isinya
    ifstream fileIn("kota.txt");  // Membuka file untuk membaca
    if (fileIn.is_open()) {
        cout << "\nIsi file kota.txt:" << endl;
        while (getline(fileIn, kota)) {
            cout << kota << endl;  // Menampilkan isi file
        }
        fileIn.close();  // Menutup file setelah membaca
    } else {
        cout << "Tidak dapat membuka file untuk membaca!" << endl;
        return 1;
    }

    return 0;
}
