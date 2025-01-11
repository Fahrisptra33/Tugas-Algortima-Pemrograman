#include <iostream>

using namespace std;

int main() {
    // Deklarasi matriks A dan B
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    int B[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int C[3][3];  // Matriks hasil perkalian A dan B

    // Proses perkalian matriks A dan B
    for (int i = 0; i < 3; i++) {          // Baris matriks A
        for (int j = 0; j < 3; j++) {      // Kolom matriks B
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {  // Perkalian elemen
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan matriks hasil (C)
    cout << "Matriks hasil perkalian A x B adalah:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
