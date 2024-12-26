/*
Nama File       : modul4.c
Programmer      : M Yusqo Hidayatulhaq
NIM             : 24344058
Tgl. pembuatan  : 18/10/2024
Deskripsi		: Program untuk Menentukan bilangan bulat ganjil atau genap
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bilangan, sisaBagi;

    //header
    printf(" Tugas Modul 4 Fundamental Programming\n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : M Yusqo Hidayatulhaq       |\n");
	printf("|Nim    : 24343058                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("<====================================>\n\n");
	
	printf("Program Menentukan Bilangan Ganjil atau Genap\n");
	printf("=============================================\n\n");

    // Input bilangan
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    // Proses menghitung sisa bagi, jika sisa bagi == 0 maka bilangan genap
    sisaBagi = bilangan % 2;

    // Proses pengecekan dengan if/else dan output hasilnya
    if (sisaBagi == 1) {
        // Jika sisa bagi 1, bilangan ganjil
        printf("Bilangan %d merupakan bilangan ganjil.\n", bilangan);
    } else {
        // Jika tidak, bilangan genap
        printf("Bilangan %d merupakan bilangan genap.\n", bilangan);
    }

    return 0;
}
