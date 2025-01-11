#include <iostream>

using namespace std;

int main() {
    int nilai, kode;
    
    // Input nilai dan kode ujian
    cout << "Masukkan nilai siswa: ";
    cin >> nilai;
    
    cout << "Masukkan kode ujian (1: Ujian Nasional, 2: Ujian Sekolah): ";
    cin >> kode;
    
    // Nested if untuk memeriksa kelulusan berdasarkan kode ujian
    if (kode == 1) {  // Ujian Nasional
        if (nilai >= 60) {
            cout << "LULUS Ujian Nasional" << endl;
        } else {
            cout << "TIDAK LULUS Ujian Nasional" << endl;
        }
    } 
    else if (kode == 2) {  // Ujian Sekolah
        if (nilai >= 50) {
            cout << "LULUS Ujian Sekolah" << endl;
        } else {
            cout << "TIDAK LULUS Ujian Sekolah" << endl;
        }
    } 
    else {  // Kode ujian tidak valid
        cout << "Kode ujian tidak valid" << endl;
    }

    // Menggunakan switch untuk mencetak jenis ujian
    switch (kode) {
        case 1:
            cout << "Jenis ujian: Ujian Nasional" << endl;
            break;
        case 2:
            cout << "Jenis ujian: Ujian Sekolah" << endl;
            break;
        default:
            cout << "Jenis ujian: Tidak diketahui" << endl;
            break;
    }

    return 0;
}
