/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/


#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int length_Pita;
    char str[50];
    int i;

/*Algoritma*/
    length_Pita = HitungChar();

    printf("===Mesin Inverse Pita===\n");

    if (length_Pita >= 50)
    {
        printf("karakter dalam pita maksimal 50 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < length_Pita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita inverse = ");
        // melakukan inverse kata
        for (int i = length_Pita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

    }

    getch();
    return 0;
}
