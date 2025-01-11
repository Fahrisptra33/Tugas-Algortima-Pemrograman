#include <iostream>

using namespace std;

int main() {
    int x;

    // Input bilangan bulat
    cout << "Masukkan sebuah bilangan bulat (1-3): ";
    cin >> x;

    // Seleksi dengan switch case
    switch (x) {
        case 1:
            cout << "Anda memilih angka SATU" << endl;
            break;
        case 2:
            cout << "Anda memilih angka DUA" << endl;
            break;
        case 3:
            cout << "Anda memilih angka TIGA" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
    }

    return 0;
}
