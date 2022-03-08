/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan nama bulan dari nomor bulan yang dimasukkan pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa 8 Maret 2022*/

#include<stdio.h>

int main ()
{
    //kamus
    int B;
    //algoritma
    printf("Pengecekan Bulan \n");
    printf("masukkan nomor bulan : ");
    scanf ( "%d", &B);

    switch (B) {
        case 1 :
            printf("ini adalah bulan Januari!");
            break;
        case 2 :
            printf("ini adalah bulan Februari!");
            break;
        case 3 :
            printf("ini adalah bulan Maret!");
            break;
        case 4 :
            printf("ini adalah bulan April!");
            break;
        case 5 :
            printf("ini adalah bulan Mei!");
            break;
        case 6 :
            printf("ini adalah bulan Juni!");
            break;
        case 7 :
            printf("ini adalah bulan Juli!");
            break;
        case 8 :
            printf("ini adalah bulan Agustus!");
            break;
        case 9 :
            printf("ini adalah bulan September!");
            break;
        case 10 :
            printf("ini adalah bulan Oktober!");
            break;
        case 11 :
            printf("ini adalah bulan November!");
            break;
        case 12 :
            printf("ini adalah bulan Desember!");
            break;
        default:
        printf("Masukkan nomor bulan tidak tepat");
        }
    return 0;
}
