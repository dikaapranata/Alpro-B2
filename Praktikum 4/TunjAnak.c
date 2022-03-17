/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menghitung dan menampilkan besarnya tunjangan anak pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 17-03-2022 08:16 WIB*/

#include <stdio.h>

int main()
{
    //Kamus
    int ja,g,t;

    //Algoritma
    printf("Program Menghtiung Tunjangan Anak\n");
    printf("Masukan jumlah anak Anda : ");
    scanf("%d", &ja);
    printf("Masukan gaji pokok Anda : ");
    scanf("%d", &g);

    switch(ja){

    case 0:
        t = 0 * (0.1 * g);
        printf("%d", t);
        break;
    case 1:
        t = 1 * (0.1 * g);
        printf("%d", t);
        break;
    case 2:
        t = 2 * (0.1 * g);
        printf("%d", t);
        break;
    case 3:
        t = 3 * (0.1 * g);
        printf("%d", t);
        break;
    default:
        t = 3 * (0.1 * g);
        printf("%d", t);
    }
    return 0;

}
