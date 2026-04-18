#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");
    vector<string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};
    cout << "Isi vector awal:" << endl;
    for(int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
    nama.push_back("Houra");s
    nama.pop_back();
    nama.erase(nama.begin() + 1);
    cout << "\nIsi vector setelah perubahan:" << endl;
    for(int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
    cout << "\nJumlah data tersisa: " << nama.size() << endl;

}