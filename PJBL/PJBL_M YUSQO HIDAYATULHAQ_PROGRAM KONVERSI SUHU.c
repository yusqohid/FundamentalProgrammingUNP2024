#include <stdio.h>

int main() {
    int pilihan;
    float suhu, hasil;
    char ulang;
    
    printf("  Tugas PJBL Fundamental Programming \n");
	printf("======================================\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : M. Yusqo Hidayatulhaq      |\n");
	printf("|NIM    : 24343058                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("======================================\n\n");

    do {
        // Tampilan menu
        printf("Program Konversi Suhu\n");
        printf("======================================\n\n");
        printf("1. Celsius ke Fahrenheit\n");
        printf("2. Fahrenheit ke Celsius\n");
        printf("Masukkan pilihan (1 atau 2): ");
        scanf("%d", &pilihan);

        // Logika konversi menggunakan operator dasar
        if (pilihan == 1) {
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &suhu);
            hasil = (suhu * 9 / 5) + 32;  // Rumus konversi
            printf("Suhu dalam Fahrenheit: %.4f\n", hasil);
        } else if (pilihan == 2) {
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &suhu);
            hasil = (suhu - 32) * 5 / 9;  // Rumus konversi
            printf("Suhu dalam Celsius: %.4f\n", hasil);
        } else {
            printf("Pilihan tidak valid!\n");
        }

        // Menanyakan apakah pengguna ingin mengulang
        printf("Apakah Anda ingin mengulang program lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("Terima kasih telah menggunakan program ini.\n");

    return 0;
}