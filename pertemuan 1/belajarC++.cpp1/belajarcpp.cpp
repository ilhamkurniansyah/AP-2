#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    string nama;
    char kom, jeniskelamin;
    int nim;
    float ip;
    cout << "Hello World!" << endl;
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Kom: ";
    cin >> kom;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan IP: ";
    cin >> ip;
    cout <<"masukan Jenis Kelamin (L/P): ";
    jeniskelamin = getche(); // agar karakter langsung tampil 
    cout << "\n" << nama << endl;
    cout << "Kom: " << kom << endl;
    cout << "NIM: " << nim << endl;
    cout << "IP: " << ip << endl;
    putchar(jeniskelamin); // menampilkan karakter yang dimasukkan
    
    getch();//karakter tidak ditampilkan di layar
}