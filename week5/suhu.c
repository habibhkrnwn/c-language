/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void)
{
  int suhu;
 
  printf("Masukan suhu dalam celcius: ");
  scanf("%d",&suhu);
 
  if (suhu > 30 ) {
    printf("Suhu sangat panas \n");
  }
  else if (suhu < -5 ) {
    printf("Suhu sangat dingin \n");
  }
  else {
    printf("Suhu sangat sejuk \n");
  }
  return 0;
}