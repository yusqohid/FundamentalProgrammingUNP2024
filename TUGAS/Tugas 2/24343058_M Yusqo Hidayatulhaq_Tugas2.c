#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angkaTebakan, tebakan, kesempatan, mainLagi;
    char pilihan, level;
    int skorTertinggi = 6; // Inisialisasi skor tertinggi (6 berarti belum ada skor lebih baik)
    int jumlahTebakan; // Hitung jumlah tebakan per permainan
    int maxAngka; // Batas atas angka acak sesuai level

    // Menginisialisasi generator angka acak
    srand(time(0));

    do {
        // Pemilihan level kesulitan
        printf("-------- Game Tebak Angka --------\n");
        printf("\nPilih level kesulitan:\n");
        printf("M - Mudah (angka 1-50)\n");
        printf("N - Normal (angka 1-100)\n");
        printf("S - Sulit (angka 1-200)\n");
        printf("----------------------------------\n");
        printf("Masukkan pilihan Anda: ");
        scanf(" %c", &level);

        switch (level) {
            case 'M':
            case 'm':
                maxAngka = 50;
                break;
            case 'N':
            case 'n':
                maxAngka = 100;
                break;
            case 'S':
            case 's':
                maxAngka = 200;
                break;
            default:
                printf("Pilihan tidak valid, level default Normal dipilih.\n");
                maxAngka = 100;
                break;
        }

        // Pilih angka acak berdasarkan level yang dipilih
        angkaTebakan = rand() % maxAngka + 1;
        kesempatan = 5;
        jumlahTebakan = 0;

        printf("\nSelamat datang di permainan Tebak Angka!\n");
        printf("Saya telah memilih sebuah angka antara 1 dan %d.\n", maxAngka);
        printf("Anda memiliki 5 kesempatan untuk menebaknya.\n");

        // Mulai permainan dengan struktur kontrol loop
        while (kesempatan > 0) {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &tebakan);
            jumlahTebakan++; // Hitung jumlah tebakan

            // Evaluasi tebakan
            if (tebakan > angkaTebakan) {
                printf("Tebakan Anda terlalu tinggi!\n");
            } else if (tebakan < angkaTebakan) {
                printf("Tebakan Anda terlalu rendah!\n");
            } else {
                printf("Selamat! Anda menebak dengan benar dalam %d tebakan!\n", jumlahTebakan);

                // Cek apakah ini skor tertinggi
                if (jumlahTebakan < skorTertinggi) {
                    skorTertinggi = jumlahTebakan;
                    printf("Skor tertinggi baru! Anda berhasil dalam %d tebakan!\n", jumlahTebakan);
                } else {
                    printf("Skor tertinggi saat ini tetap %d tebakan.\n", skorTertinggi);
                }
                break;
            }

            kesempatan--; // Kurangi jumlah kesempatan
            printf("Kesempatan tersisa: %d\n", kesempatan);
        }

        // Evaluasi jika gagal menebak dalam 5 kesempatan
        if (kesempatan == 0) {
            printf("Maaf, Anda kehabisan kesempatan. Angka yang benar adalah %d\n", angkaTebakan);
        }

        // Opsi untuk bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

        switch (pilihan) {
            case 'y':
            case 'Y':
                mainLagi = 1;
                break;
            case 'n':
            case 'N':
                mainLagi = 0;
                printf("Terima kasih telah bermain!\n");
                break;
            default:
                printf("Pilihan tidak valid, keluar dari permainan.\n");
                mainLagi = 0;
                break;
        }
    } while (mainLagi);

    return 0;
}

