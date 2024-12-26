#include <stdio.h>
#include <string.h>

int hitungPanjangString(char nama[20]){
    return strlen(nama);
}
void judul(){
    printf("PROGRAM MENGHITUNG PANJANG STRING\n");
    printf("----------------------------------\n");
}

void main(){
    int panjang;
    char nama[20];
    judul();

    printf("\nMasukkan Nama Panggilan anda: ");
    scanf("%s", nama);

    panjang = hitungPanjangString(nama);
    printf("Panjang nama anda adalah %d Karakter", panjang);
}