#include <iostream>
using namespace std;

string variabelGlobal = "ilmu";//contoh variabel global
void namevariable() {
    string variabeLokal = "komputer";//contoh variabel lokal

    //coba akses 1
    cout << variabeLokal << endl;
    //coba akses 2
    cout << variabelGlobal << endl;
}

int main() {
    namevariable();

    //coba akses 3
    cout << variabelGlobal << endl;
    return 0;
}