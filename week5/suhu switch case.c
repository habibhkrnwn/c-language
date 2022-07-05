/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
  int suhu;
 
  printf("Masukan suhu dalam celcius: ");
  scanf("%d",&suhu);
 
  switch (suhu) {
  case '> 30' :
    printf("Suhu sangat panas \n");
    break;
  case '< -5' :
    printf("Suhu sangat dingin \n");
  break;
    default:
    printf("Suhu sangat sejuk \n");
  }
}