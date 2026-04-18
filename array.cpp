#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    system("cls");
    // 2 cara membuat array
    // cara 1 dengan cara kosong
    // string nama[5];
    // nama[0] = "alya";
    // nama[1] = "parul";
    // nama[2] = "hana";
    // nama[3] = "dewi";
    // nama[4] = "padhil";
    // menampilkan data dalam array
    //cara 2 
    // string nama[5] = {"alya", "parul", "hana", "dewi", "padhil"};
    // // di atas adalah array 1 dimensi
    // // string nama [] = {"alya", "parul", "hana", "dewi", "padhil"};
    // // cout << nama[0] << endl;
    // // cout << nama[3] << endl;
    // //meggunakan looping assending
    // // for (int i = 0; i < 5; i++) {
    // //     cout << nama[i] << endl;
    // // }
    // // menggunakan looping desending
    //    for (int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl;
    // }

    // multidimensional array
    //1 2 3
    //4 5 6
    // int matrix[2][3] = {{1, 2, 3},{4, 5, 6}};
    // for(int i = 0; i < 2; i++) {//baris
    //     for(int j = 0; j < 3; j++) {
    //         cout << matrix[i][j] << " ";
    //         cout << matrix [i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //string (array of characters)
    // string nama = "alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length() << endl;//untuk menghitung jumlah char
    // string s1 = "Hello";
    // string s2 = "World";
    // //1.s1 + s2
    // s1 = s2;
    // cout << "s1 sekarang = " << s1 << endl;
    // //2. s1 = s1 + s2
    // s1 = "Hello";//reset nilai
    // cout <<"hasl gabungan" => s1 + s2 << endl;
    // //3. s1.lenght()
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;

    // // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[5] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    //array library
    //array biasa : float nilai[5]
    // array<float,5> nilai = {87.5,90,100,95.7,78.3};
    // cout << "nilai : " ;
    // for(int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }
}