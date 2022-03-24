/*Nama File     : CekSempurna.c*/
/*Deskripsi     : mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard termasuk bilangan sempurna atau bukan*/
/*Pembuat       : Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan : Kamis, 24 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b;
    b = 0;

	printf("Program Mengecek Bilangan Sempurna \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Masukkan bilangan positf");
    }
    else {
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                b = b + i;
            }
        }
        if (N == b) {
            printf("%d Bilangan sempurna", N);
        }
        else {
            printf("%d Bukan bilangan sempurna", N);
        }
    }
}
