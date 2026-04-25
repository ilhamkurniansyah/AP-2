#include <iostream>
#include <vector>
using namespace std;

int main () {
    //vektor declaration & initialization
    vector<string> nama_karyawan = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    //menampilkan data dalam vektor
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }
    //add data to vektor
    nama_karyawan.push_back("edric"); 
    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //delate data from vektor
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3); //menghapus data pada index ke 1
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }
}