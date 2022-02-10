#include <stdio.h>
#include <stdlib.h>

struct mhs{
    char nama[50];
    int nim;
    int kehadiran;
};

int main()
{   /*
    int jumlah;
    printf("Masukkan Jumlah Mahasiswa : ");
    scanf("%d", &jumlah);

    struct mhs mahasiswa[jumlah];

    int i;
    */


    // Masukkan data mahasiswa
    /*
    for (i = 0; i < jumlah; ++i){
    mahasiswa[i].urutan = i + 1;

    printf("Masukkan Data Mahasiswa Urutan Ke-%d\n",mahasiswa[i].urutan);
    printf("Masukkan Nama : ");
    scanf("%s", mahasiswa[i].nama);
    printf("Masukkan NIM : ");
    scanf("%d", mahasiswa[i].nim);
    printf("Masukkan Persentase Kehadiran : ");
    scanf("%d", mahasiswa[i].kehadiran);

    }
    */

    int i;

    // Daftar Mahasiswa
    struct mhs kelas1[5] = {{"Nur", 13220025, 100}, {"Hidayatulloh", 13221025, 65},
    {"Wiyoso", 13222025, 40},{"Achmad", 13230025, 85},{"Rizky", 13231025, 70}};


    printf("Daftar Mahasiswa yang memiliki kehadiran di bawah 80% : \n\n");
    for (i = 0; i < 5; ++i){
        if (kelas1[i].kehadiran < 80){
            printf("Nama : %s\n", kelas1[i].nama);
            printf("NIM  : %d\n\n", kelas1[i].nim);
        }

    }

return 0;
}
