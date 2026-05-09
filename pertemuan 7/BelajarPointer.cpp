#include <iostream>
using namespace std;

int main (){
    system("cls");
    
    //pointer declaration
    int number = 35;
    int *pointer_number = &number;

    cout << "isi variabel number: " << number << endl;
    cout << "alamat dari variabel number: " << &number << endl;
    cout << "isi variabel pointer_number: " << pointer_number << endl;
    cout << "isi variabel yang ditunjuk oleh pointer_number: " << *pointer_number << endl;
    cout << "alamat memori variabel pointer_number: " << &pointer_number << endl;

}