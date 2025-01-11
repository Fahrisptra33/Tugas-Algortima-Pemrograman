#include <iostream>
#include <cmath>  // Untuk fungsi sqrt()

using namespace std;

int main() {
    // Deklarasi variabel
    double panjang, lebar, luas, keliling, diagonal;
    int pilihan;

    // Input panjang dan lebar persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    // Loop untuk menu
    do {
        // Menampilkan menu
        cout << "\nMENU EMPAT PERSEGI PANJANG\n";
        cout << "1. Hitung Luas\n";
        cout << "2. Hitung Keliling\n";
        cout << "3. Hitung Panjang Diagonal\n";
        cout << "4. Keluar Program\n";
        cout << "Pilih Nomor: ";
        cin >> pilihan;

        // Pilihan dari menu
        switch (pilihan) {
            case 1:
                // Menghitung luas
                luas = panjang * lebar;
                cout << "Luas persegi panjang: " << luas << endl;
                break;
            case 2:
                // Menghitung keliling
                keliling = 2 * (panjang + lebar);
                cout << "Keliling persegi panjang: " << keliling << endl;
                break;
            case 3:
                // Menghitung panjang diagonal
                diagonal = sqrt(pow(panjang, 2) + pow(lebar, 2));
                cout << "Panjang diagonal persegi panjang: " << diagonal << endl;
                break;
            case 4:
                // Keluar program
                cout << "Keluar dari program." << endl;
                break;
            default:
                // Jika pilihan tidak valid
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}
