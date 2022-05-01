/*
Nama File: insertionSort.c
Nama     : Handhika Pranata Kusuma Wardana
NIM      : 24060121140112
Deskripsi: Membuat algoritma pengurutuan dengan cara menghitung jumlah
           kemunculan dari setiap data yang di input dengan insertion sort
Tanggal  : minggu, 01-05-2022 17.19 wib
*/

#include <stdio.h>


int main(){

    //Kamus
    int N;
    int i;
    int T[100];

    //Algoritma
    printf("Program Insertion Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    InsertionSort(T, N);
    printf("Hasil pengurutan dengan insertion sort adalah: \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

void InsertionSort(int T[], int N){

    //Kamus Lokal
    int i;
    int j;
    int sum;

    //Algoritma
    for (i = 1; i < N; i++) {
        sum = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > sum) {
            T[j + 1] = T[j];
            j-- ;
        }
        T[j + 1] = sum;
    }
}
