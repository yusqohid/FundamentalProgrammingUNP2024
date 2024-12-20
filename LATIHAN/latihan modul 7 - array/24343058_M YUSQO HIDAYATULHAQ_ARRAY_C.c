#include <stdio.h>

int angka[5] = {10, 20, 30, 40, 50,};

int main(){
    int i, indeks, nilaiBaru;

    printf("PROGRAM MENGGANTI ELEMEN ARRAY\n");
    printf("---------------------------------\n");

    printf("array sebelum perubahan: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Angka ke-%d = %d\n", i, angka[i]);
    }
    
    printf("masukkan indeks array yang ingin diganti(0-4) : ");
    scanf("%d", &indeks);
    if (indeks >= 0 && indeks < 5)
    {
        printf("Masukkan nilai baru: ");
        scanf("%d", &nilaiBaru);

        angka[indeks] = nilaiBaru;

        printf("Array setelah perubahan: \n");
        for (i = 0; i < 5; i++)
        {
            printf("Angka ke-%d = %d\n", i, angka[i]);
        }

    } else {
        printf("Indeks tidak valid. ketik 0 - 4");
    }
    
    return 0;
}