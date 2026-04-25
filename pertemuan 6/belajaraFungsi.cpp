#include <iostream>
using namespace std;

void sapa(string nama) {
    cout << "Halo, " << nama << "selamat datang di ap 2" << endl;
}

int main() {
    string namaPengguna = "alya";

    sapa(namaPengguna);//sapa alya// parameter aktual
    return 0;
}