#include <stdio.h>
#include <string.h>

char* gabungkanString(char namaDepan[20], char namaBelakang[20]){
    strcat(namaDepan, " ");
    strcat(namaDepan, namaBelakang);
    return namaDepan;
}
void judul(){
    printf("PROGRAM MENGGABUNGKAN 2 STRING\n");
    printf("----------------------------------\n");
}

void main(){
    char a[20], b[20];
    char* gabung;

    judul();

    printf("Masukkan nama depan: ");
    scanf("%s", a);
    printf("Masukkan nama belakang: ");
    scanf("%s", b);

    gabung = gabungkanString(a, b);
    printf("Nama Lengkap anda adalah %s", gabung);
}