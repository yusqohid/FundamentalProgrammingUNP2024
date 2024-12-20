#include <stdio.h>
#include <string.h>

//definisi global struct
struct tanggal
{
    int hari, bulan, tahun;
};

struct mahasiswa
{
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// deklarasi global variabel
struct mahasiswa data_mahasiswa;

void main(){

    //mengisi data ke dalam struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "Muhammad Yusqo Hidayatulhaq");
    data_mahasiswa.nim = 24343058;
    data_mahasiswa.tanggal_lahir.hari = 11;
    data_mahasiswa.tanggal_lahir.bulan = 10;
    data_mahasiswa.tanggal_lahir.tahun = 2003;

    //menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("NIM: %d\n", data_mahasiswa.nim);
    printf("Tanggal lahir: %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari,data_mahasiswa.tanggal_lahir.bulan,data_mahasiswa.tanggal_lahir.tahun);
}