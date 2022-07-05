/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void)
{
  int nilai;
 
  printf("Input Nomor (1 - 7): ");
  scanf("%d",&nilai);
 
  if (nilai == 1 ) {
    printf("Hari ke..: 1 \n Minggu \n");
  }
  else if (nilai == 2 ) {
    printf("Hari ke..: 2 \n Senin \n");
  }
  else if (nilai == 3 ) {
    printf("Hari ke..: 3 \n Selasa \n");
  }
  else if (nilai == 4 ) {
    printf("Hari ke..: 4 \n Rabu \n");
  }
  else if (nilai == 5 ) {
    printf("Hari ke..: 5 \n Kamis \n");
  }
  else if (nilai == 6 ) {
    printf("Hari ke..: 6 \n Jumat \n");
  }else if (nilai == 7 ) {
    printf("Hari ke..: 7 \n Sabtu \n");
  }
  else {
    printf("Maaf, format nomor tidak sesuai \n");
  }
  return 0;
}