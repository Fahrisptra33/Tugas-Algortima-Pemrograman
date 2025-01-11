#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int a, b, c;
    
    // Input tiga bilangan
    cout << "Masukkan panjang tiga garis:\n";
    cout << "Panjang a: ";
    cin >> a;
    cout << "Panjang b: ";
    cin >> b;
    cout << "Panjang c: ";
    cin >> c;
    
    // Periksa apakah dapat membentuk segitiga
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "SEGI TIGA" << endl;
    } else {
        cout << "BUKAN SEGITIGA" << endl;
    }
    
    return 0;
}
