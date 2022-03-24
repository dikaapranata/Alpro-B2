/*Nama File     : SiputNaik.c*/
/*Deskripsi     : Mengetahui berapa hari waktu yang dibutuhkan oleh siput tersebut untuk mencapai ketinggin N meter*/
/*Pembuat       : Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan : Kamis, 24 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main(){
 //Kamus
    float N;
    float tinggi;
    int h;

 //Algoritma
    printf("Program Siput Naik \n");
    printf("Masukkan kedalaman lubang  = ");
    scanf("%f", &N);

    if (N <= 0){
        printf("Kedalaman lubang harus positif");
    }

    else{
        h = 0;
        tinggi = 0;
        while (tinggi >= 0 && tinggi < N ){
            tinggi = tinggi + 0.3;
            if (tinggi < N){
                tinggi = tinggi - 0.1;
            }
            h = h + 1;
        }

        printf("Waktu yang dibutuhkan oleh siput adalah %d hari", h);
    }

    return 0;
}
