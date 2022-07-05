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
 
  printf("Masukan Nilai : ");
  scanf("%d",&nilai);
 
  if (nilai > 80 ) {
    printf("nilai anda : A \n");
  }
  else if (nilai > 70 && nilai <= 80 ) {
    printf("nilai anda : B \n");
  }
  else if (nilai > 60 && nilai <= 70 ) {
    printf("nilai anda : C \n");
  }
  else if (nilai > 50 && nilai <= 60 ) {
    printf("nilai anda : D \n");
  }
  else if (nilai <= 50 ) {
    printf("nilai anda : E \n");
  }
  else {
    printf("Format tidak didukung \n");
  }
  return 0;
}