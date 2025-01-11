#include <iostream>

using namespace std;

int main() {
    float nilai;
    char kategori;

    // Input nilai rata-rata
    cout << "Masukkan nilai rata-rata siswa: ";
    cin >> nilai;

    // Validasi nilai menggunakan logical operator
    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid. Masukkan nilai antara 0 dan 100." << endl;
    } else {
        // Nested if untuk menentukan kelulusan
        if (nilai >= 70) {
            cout << "Status: LULUS" << endl;

            // Tentukan kategori nilai dengan switch case
            if (nilai >= 90) {
                kategori = 'A';
            } else if (nilai >= 80) {
                kategori = 'B';
            } else {
                kategori = 'C';
            }

            switch (kategori) {
                case 'A':
                    cout << "Kategori Nilai: A (Sangat Baik)" << endl;
                    break;
                case 'B':
                    cout << "Kategori Nilai: B (Baik)" << endl;
                    break;
                case 'C':
                    cout << "Kategori Nilai: C (Cukup)" << endl;
                    break;
            }
        } else {
            cout << "Status: TIDAK LULUS" << endl;
            cout << "Kategori Nilai: Tidak Lulus" << endl;
        }
    }

    return 0;
}
