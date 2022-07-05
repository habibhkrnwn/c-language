/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void)
{
  int pemakaian, total;
 
  printf("Masukan Pemakaian Rekening Listrik : ");
  scanf("%d",&pemakaian);
 
  if (pemakaian <= 100 ) 
    total=100000;
    
  else if (pemakaian > 500)
    total=700000+2500*(pemakaian-500);
  
  else 
    total=100000+1500*(pemakaian-100);
  
  printf("biaya Pemakaian %d \n", total  );
  return 0;
}