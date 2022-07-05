/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void)
{
  char nilai;
 
  printf("Input Nilai Anda (A - E): ");
  scanf("%c",&nilai);
 
  if (nilai == 'A' ) {
    printf("nilai angka : 4 \n");
  }
  else if (nilai == 'B' ) {
    printf("nilai anda : 3 \n");
  }
  else if (nilai == 'C' ) {
    printf("nilai anda : 2 \n");
  }
  else if (nilai == 'D' ) {
    printf("nilai anda : 1 \n");
  }
  else if (nilai == 'E' ) {
    printf("nilai anda : 0 \n");
  }
  else {
    printf("Format tidak didukung \n");
  }
  return 0;
}