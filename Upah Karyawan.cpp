#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nama;
    char golongan;
    int jam_kerja;
    int upah_per_jam, upah_lembur = 3000;
    int upah, total_upah;

    // Input nama karyawan, golongan, dan jumlah jam kerja
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama); // Menggunakan getline untuk membaca nama dengan spasi
    cout << "Masukkan golongan (A/B/C/D): ";
    cin >> golongan;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jam_kerja;

    // Menentukan upah per jam berdasarkan golongan
    switch (golongan) {
        case 'A':
            upah_per_jam = 4000;
            break;
        case 'B':
            upah_per_jam = 5000;
            break;
        case 'C':
            upah_per_jam = 6000;
            break;
        case 'D':
            upah_per_jam = 7000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            return 1; // Keluar dari program jika golongan tidak valid
    }

    // Menghitung upah
    if (jam_kerja <= 48) {
        // Tidak ada lembur
        total_upah = jam_kerja * upah_per_jam;
    } else {
        // Ada lembur
        int jam_lembur = jam_kerja - 48;
        total_upah = (48 * upah_per_jam) + (jam_lembur * upah_lembur);
    }

    // Output hasil
    cout << "Nama Karyawan: " << nama << endl;
    cout << "Total Upah: Rp. " << total_upah << endl;

    return 0;
}
