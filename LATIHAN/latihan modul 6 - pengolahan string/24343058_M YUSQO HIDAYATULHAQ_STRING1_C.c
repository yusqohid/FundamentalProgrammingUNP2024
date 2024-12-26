#include <stdio.h>
#include <string.h>

int bandingkanString(char str1[20], char str2[20]){
    return strcmp(str1, str2);
}
void judul(){
    printf("PROGRAM MEMBANDINGKAN 2 STRING\n");
    printf("----------------------------------\n");
}

void main(){
    char a[20], b[20];
    int hasil;

    judul();

    printf("Masukkan string pertama: ");
    scanf("%s", a);
    printf("Masukkan string kedua: ");
    scanf("%s", b);

    hasil = bandingkanString(a, b);
    if (hasil == 0)
    {
        printf("Kedua string SAMA\n");
    } else {
        printf("Kedua string TIDAK sama");
    }
    
}