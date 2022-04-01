/*Nama File 	: Tetris.c*/
/*Deskripsi 	: Menampilkan susunan karakter ‘*’ pada layar dari sebuah inputan integer N > 0 dan dimulai dari yang terkecil*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 01-04 2022 13:17 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;
    int sum;

    //Algoritma
    printf("Program Tetris\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
                for(sum = 0;sum < i;sum++){
                    printf("*");
                }
                printf("\n");
        }
    }
    return 0;
}
