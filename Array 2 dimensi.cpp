#include <iostream>

using namespace std;

int main() {
    int matriks[2][3]; // Deklarasi array 2 dimensi (2 baris, 3 kolom)

    // Input elemen-elemen matriks
    cout << "Masukkan elemen-elemen matriks 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Menampilkan elemen-elemen matriks
    cout << "\nMatriks yang dimasukkan adalah:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
