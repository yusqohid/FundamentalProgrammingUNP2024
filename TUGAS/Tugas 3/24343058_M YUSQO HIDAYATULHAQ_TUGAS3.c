#include <stdio.h>
#include <math.h>

// Fungsi rekursif untuk Menara Hanoi
void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    int cakram;

    // Meminta input jumlah cakram dari pengguna
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);

    // Panggil fungsi rekursif untuk Menara Hanoi
    printf("Langkah-langkah untuk memindahkan %d cakram:\n", cakram);
    hanoi(cakram, 'A', 'C', 'B'); // 'A' adalah tiang asal, 'C' adalah tiang tujuan, 'B' adalah tiang bantu

    // Hitung jumlah total langkah
    int totalLangkah = pow(2, cakram) - 1;
    printf("Jumlah total langkah yang diperlukan: %d\n", totalLangkah);

    return 0;
}
