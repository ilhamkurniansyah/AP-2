#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan(void)
void tampilkanPesan() {
    cout << "======= selamat datang di AP 2 =======" << endl;
}

//fungsi dengan nilai balikan(int,doubel,string)
int tambah(int a, int b) {
    return a + b;
}

//fungsi dengan nama yang sama dengan parameter yang berbeda,TIPE BERBEDA
int Kali (int a, int b) {
    return a * b;
}

double kali (double a, double b) {
    return a * b;
}

//fungsi recursive,fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n == 0 || n == 1) { //base case
        return 1;
    } else {
        return n * faktorial(n - 1);//recursive case
    }
}

int main() {
    system("cls");

    //memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    //memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasiltambah = tambah(x, y);
    cout << "Hasil penjumlahan "  << hasiltambah << endl;

    //menggunakan fungsi overload
    int hasilKaliInt = Kali(x, y);

    double n = 3, m = 5;
    double hasilKaliDouble = kali(n, m);
    cout << "Hasil perkalian int: " << hasilKaliInt << endl;
    cout << "Hasil perkalian double: " << hasilKaliDouble << endl;
    //menggunakan fungsi recursive
    int angka = 5;
    int hasilFaktorial = faktorial(angka);
    cout << "faktorial dari " << angka << " adalah " << hasilFaktorial << endl;
    
    return 0;
}