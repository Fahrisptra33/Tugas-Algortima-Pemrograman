#include <iostream>

using namespace std;

int main() {
    int n = 5;                       // Jumlah elemen array
    int arr[n] = {64, 34, 25, 12, 22}; // Array yang akan diurutkan

    // Menampilkan array sebelum diurutkan
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Algoritma Bubble Sort
    for (int i = 0; i < n - 1; i++) {         // Loop untuk setiap pass
        for (int j = 0; j < n - i - 1; j++) { // Loop untuk membandingkan elemen
            if (arr[j] > arr[j + 1]) {        // Jika elemen tidak urut, tukar
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

