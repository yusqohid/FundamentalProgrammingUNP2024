#include <stdio.h>

int angka[5] = {10, 20, 30, 40, 50,};

int main(){
    int i;

    printf("PROGRAM MENAMPILKAN ELEMEN ARRAY\n");
    printf("---------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("Array ke-%d = %d\n", i + 1, angka[i]);
    }
    
    return 0;
}