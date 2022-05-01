/*
Nama File: countSort.c
Nama     : Handhika Pranata Kusuma Wardana
NIM      : 24060121140112
Deskripsi: Membuat algoritma pengurutuan dengan cara menghitung jumlah
           kemunculan dari setiap data yang di input dengan metode counting sort
Tanggal  : minggu, 01-05-2022 17.19 wib
*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int T[100];

    //Algoritma
    printf("Program Counting Sort\n");
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    CountingSort(T, N);
    printf("Hasil pengurutan dengan counting sort adalah: \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

void CountingSort(int T[], int N){

    //Kamus Lokal
    int i;
    int j;
    int sum;
    int idx;

    //Algoritma
    for(i = 0; i < (N-1); i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(T[j] < T[idx]){
                idx = j;
            }
        }
        sum = T[i];
        T[i] = T[idx];
        T[idx] = sum;
    }
}
