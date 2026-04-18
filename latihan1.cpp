#include <iostream>
using namespace std;

int main() {
    system("cls");

    int matrix1[2][2];
    int matrix2[2][2];
    int hasil[2][2];

    // Input matriks 1
    cout << "Matriks 1" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 
                 << " kolom " << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }

    // Input matriks 2
    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 
                 << " kolom " << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }

    // Penjumlahan matriks
    cout << "Hasil penjumlahan:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}