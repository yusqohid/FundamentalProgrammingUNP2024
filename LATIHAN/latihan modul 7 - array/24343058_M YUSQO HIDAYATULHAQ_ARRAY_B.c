#include <stdio.h>

int angka[5] = {10, 20, 30, 40, 50,};

int main(){
    int i;
    int jumlah = 0;

    printf("PROGRAM MENJUMLAHKAN ELEMEN ARRAY\n");
    printf("---------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Array ke-%d = %d\n", i + 1, angka[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        jumlah += angka[i];
    }
    printf("Jumlah dari semua elemen adalah: %d\n", jumlah);
    
    return 0;
}