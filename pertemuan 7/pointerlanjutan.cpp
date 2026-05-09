#include  <iostream>
using namespace std;

int main(){
    system ("cls");

    //1. pointer dalam pointer
    cout << "=== Pointer dalam Pointer ===" << endl;
    int a = 64;
    int *p = &a; //pointer p menyimpan alamat a
    int **q = &p; //pointer q menyimpan alamat p

    cout << "Nilai a: " << a << endl; //64
    cout << ''
}