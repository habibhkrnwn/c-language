/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     char nilai;
    
  printf("Input Nilai Anda (A - E): ");
  scanf("%c",&nilai);
  
    switch (nilai) {
    case 'A':
      printf("Nilai angka : 4 \n");
      break;
    case 'B':
      printf("Nilai angka : 3 \n");
      break;
    case 'C':
      printf("Nilai angka : 2 \n");
      break;
    case 'D':
      printf("Nilai angka : 1 \n");
      break;
    case 'E':
      printf("Nilai angka : 0 \n");
      break;
    default:
      printf("Maaf, format nilai tidak sesuai \n");
  }
}
