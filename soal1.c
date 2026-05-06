/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026 * Modul : 4 - Dynamic structure
* Percobaan : praktikum
* Hari dan Tanggal : Rabu, 6 May 2026 
* Nama File : soal1.c 
* Pembuat : Mhd. Khalil Alfaiz H
* Deskripsi : Menghitung jeda waktu pasien */ 

#include <stdio.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    
    char id[N][20];
    int durasi[N];
   
    for (int i = 0; i < N; i++) {
        scanf("%s %d", id[i], &durasi[i]);
    }
    
   
    printf("ORDER");
    for (int i = 0; i < N; i++) {
        printf(" %s", id[i]);
    }
    printf("\n");
    int totaltunggu = 0;
    int sekarang = 0; 
    for (int i = 0; i < N; i++) {
       
        totaltunggu += sekarang;
        sekarang += durasi[i];
    }
    
    printf("WAIT %d\n", totaltunggu);
    
    return 0;
}


