#ifndef MESINKAR_H
#define MESINKAR_H

#ifndef MARK
#define MARK '.'
#endif

#ifndef ENTER
#define ENTER 10
#endif

char CC; /* definisi states */

/*Prototype*/
void START();
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */

void ADV();
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */

int HitungChar();

int EOP();
/* true jika CC==MARK */

#endif // MESINKAR_H_INCLUDED
