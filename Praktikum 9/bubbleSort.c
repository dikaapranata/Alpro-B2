/*
Nama File: bubbleSort.c
Nama     : Handhika Pranata Kusuma Wardana
NIM      : 24060121140112
Deskripsi: Membuat algoritma pengurutuan dengan cara menghitung jumlah
           kemunculan dari setiap data yang di input dengan metode bubble sort
Tanggal  : minggu, 01-05-2022 17.19 wib
*/

#include <stdio.h>

int main(){

    //kamus
    int N;
    int i;
    int j;
    int T[100];

    //algoritma
    printf("Program Bubble Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);

    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    bubbleSort(T, N);
    printf("Hasil pengurutan dengan bubble sort adalah :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
      }
    printf("\n");
}

void bubbleSort(int arr[], int N){

    //Kamus Lokal
    int i;
    int j;
    int sum;

    //Algoritma
    for(i = 0; i < N; i++){
        for(j=0; j < N-i-1; j ++){
            if(arr[j] > arr[j+1]){
            sum = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = sum;
      }
    }
  }
}

