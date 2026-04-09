#include <stdio.h>
int main() {
    char nama[50];
    char kom;
    int nim;
    float ip;
    printf("Hello World!\n");
    printf("Masukkan Nama: ");
    scanf("%[^\n]", nama); // untuk membaca string dengan spasi
    printf("Masukkan Kom: ");
    scanf("%c", &kom);
    printf("Masukkan NIM: ");
    scanf("%d", &nim);
    printf("Masukkan IP: ");
    scanf("%f", &ip);
    printf("\n%s", nama);
    printf("Kom: %c\n", kom);
    printf("NIM: %d\n", nim);
    printf("IP: %.2f\n", ip);
    

}