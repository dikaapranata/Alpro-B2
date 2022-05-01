/*
Nama File: selectionSort.c
Nama     : Handhika Pranata Kusuma Wardana
NIM      : 24060121140112
Deskripsi: Membuat algoritma pengurutuan dengan cara menghitung jumlah
           kemunculan dari setiap data yang di input dengan selection sort
Tanggal  : minggu, 01-05-2022 17.19 wib
*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int T[100];

    //Algoritma
    printf("Program Selection Sort\n");
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    SelectionSort(T, N);
    printf("Hasil pengurutan dengan selection sort adalah: \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

int SelectionSort(int arr[], int n){

    //Kamus Lokal
    int i;
    int j;
    int loc;
    int swab;

    //Algoritma
    for(i = 0; i < (n-1); i++){
        loc = i;
        for (j = i + 1; j < n; j++){
            if(arr[loc] > arr[j]){
                loc = j;
            }
        }
        if(loc != i){
          swab = arr[i];
          arr[i] = arr[loc];
          arr[loc] = swab;
        }
    }
}
