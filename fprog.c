/*
    Nama file   : tugas1.c
    Programmer  : M Yusqo Hidayatulhaq
    NIM         : 24343058
    Deskripsi   : Program Kalkolator Nilai Mahasiswa
*/
#include <stdio.h>

int main(){
    //deklarasi variabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;

    //input nilai dari pengguna
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    printf("Masukkan nilai UTS (0-100)  : ");
    scanf("%f", &nilaiUTS);
    printf("Masukkan nilai UAS (0-100)  : ");
    scanf("%f", &nilaiUAS);

    //hitung nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    //tentukan apakah lulus atau tidak
    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);

    //output hasil
    printf("\nNilai Akhir anda : %.2f\n", nilaiAkhir);

    if (lulus){
        printf("Selamat Anda Lulus");
 
    } else{
        printf("Silakan coba lagi tahun depan");
    }

    return 0;
}