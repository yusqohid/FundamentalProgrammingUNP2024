#include <stdio.h>
#include <time.h>

int main() {
    int pilihan;
    float suhu, hasil;
    char ulang, satuan;
    clock_t startTime, endTime;
    double executionTime;
    FILE *inputFile, *outputFile;

    startTime = clock();
    
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
        printf("3. Input dari file\n");
        printf("Masukkan pilihan (1 - 3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Masukkan suhu dalam Celsius: ");
            scanf("%f", &suhu);
            hasil = (suhu * 9 / 5) + 32;
            printf("Suhu dalam Fahrenheit: %.4f\n", hasil);
        } else if (pilihan == 2) {
            printf("Masukkan suhu dalam Fahrenheit: ");
            scanf("%f", &suhu);
            hasil = (suhu - 32) * 5 / 9;
            printf("Suhu dalam Celsius: %.4f\n", hasil);
        } else if (pilihan == 3) {
            inputFile = fopen("input_2.txt", "r");
            if (inputFile == NULL) {
                printf("File input tidak dapat dibuka\n");
                continue;
            }

            outputFile = fopen("output_2.txt", "w");
            if (outputFile == NULL) {
                printf("File output tidak dapat dibuka\n");
                fclose(inputFile);
                continue;
            }

            while (fscanf(inputFile, "%f%c", &suhu, &satuan) != EOF) {
                if (satuan == 'c') {
                    hasil = (suhu * 9 / 5) + 32;
                    fprintf(outputFile, "%.4f C = %.4f F\n", suhu, hasil);
                } else if (satuan == 'f') {
                    hasil = (suhu - 32) * 5 / 9;
                    fprintf(outputFile, "%.4f F = %.4f C\n", suhu, hasil);
                } else {
                    fprintf(outputFile, "ERROR: Input tidak valid: %.4f%c\n", suhu, satuan);
                }
            }

            fclose(inputFile);
            fclose(outputFile);
            printf("Konversi selesai, cek file output_2.txt\n");
        } else {
            printf("Pilihan tidak valid!\n");
        }

        // Membersihkan buffer input
        while (getchar() != '\n');

        // Menanyakan apakah pengguna ingin mengulang
        printf("Apakah Anda ingin mengulang program lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("Terima kasih telah menggunakan program ini.\n");

    endTime = clock();
    executionTime = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;

    printf("Waktu eksekusi program adalah %.6f detik\n", executionTime);

    return 0;
}
