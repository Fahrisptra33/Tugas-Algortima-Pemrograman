#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Merekam (menulis) ke file
    ofstream fileOut("contoh.txt");  // Membuka file untuk menulis

    if (!fileOut) {  // Mengecek apakah file berhasil dibuka
        cerr << "Tidak dapat membuka file untuk menulis!" << endl;
        return 1;
    }

    // Menulis data ke dalam file
    fileOut << "Ini adalah contoh file." << endl;
    fileOut << "C++ sangat menyenangkan!" << endl;
    fileOut << "Belajar file handling di C++." << endl;

    fileOut.close();  // Menutup file setelah menulis

    // Membaca isi file
    ifstream fileIn("contoh.txt");  // Membuka file untuk membaca

    if (!fileIn) {  // Mengecek apakah file berhasil dibuka
        cerr << "Tidak dapat membuka file untuk membaca!" << endl;
        return 1;
    }

    string line;
    cout << "Isi file contoh.txt:" << endl;
    // Membaca dan mencetak setiap baris file
    while (getline(fileIn, line)) {
        cout << line << endl;
    }

    fileIn.close();  // Menutup file setelah membaca

    return 0;
}
