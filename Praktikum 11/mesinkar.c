#ifndef MESINKAR_C
#define MESINKAR_C

#include <stdio.h>
#include "mesinkar.h"

/* definisi Pita */
char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;

/*Body Prototype*/
void START()
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */
{
   FILEKU=fopen(Pita_karakter,"r");
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

}

void ADV()
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */
{
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

   if(CC==MARK)
   {
      fclose(FILEKU);
   }
}


int EOP()
/* true jika CC==MARK */
{
   return(CC==MARK);
}

int HitungChar(){
   /*Kamus*/
   int hitung;

   /*Algoritma*/
   START();
   while(!EOP()){
		hitung += 1;
		ADV();
	}
   fclose(FILEKU);
   return hitung;
}

#endif
