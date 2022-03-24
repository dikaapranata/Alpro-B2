/*Nama File     : CekPrima.c*/
/*Deskripsi     : mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard termasuk bilangan prima atau bukan*/
/*Pembuat       : Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan : Kamis, 24 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
 //Kamus
	int N, i, P;
	P = 0;

 //Algoritma
	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &N);

	if ( N <= 0) {
        printf("Bilangan Harus Positif");
	}
	else {
        for (i = 2; i < N; i++) {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d Bukan Bilangan prima", N);
        }
        else {
            printf("%d Bilangan prima", N);
        }
	}
	return 0;
}
