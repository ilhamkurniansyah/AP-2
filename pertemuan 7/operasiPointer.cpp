#include <iostream>
using namespace std;

int main(){
    system("cls");

    //1.operasi penugasan
    cout <<"=== Operasi Penugasan ===" << endl;
    int a = 10;
    int *p;
    p = &a; //pointer simpan alamat a

    cout << "Nilai a: " << a << endl; //10
    cout << "Alamat a (&a): " << &a << endl; //alamat variabel a
    cout << "isi pointer p : " << p << endl; // alamat variabel a
    cout << "nilai *p : " << *p << endl; // 10

    //2. operasi Arimatika
    cout << "==== Operasi Arimatika ===" << endl;
    int nilai [3]; //array angka 3
    int *oke;

    nilai [0] = 125;
    nilai [1] = 345;
    nilai [2] = 750;

    oke = &nilai[0]; //"oke" sekarng menyimpan alamat nilai[0] 
    /*ilustrasi:
    nilai [0] --> alamat 1000 --> isi 125
    nilai [1] --> alamat 1004 --> isi 345
    nilai [2] --> alamat 1005 --> isi 750
    maka sekarang oke = 1000 */

    cout << "nilai" << *oke << "ada di alamat " << oke << endl; 
    cout << "nilai" << *(oke + 1) << "ada di alamat " << (oke + 1) << endl;
    cout << "nilai" << *(oke + 2) << "ada di alamat " << (oke + 2) << endl;

    
    

}