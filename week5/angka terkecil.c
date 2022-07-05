/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
 int a,b,c,result;
  
  printf("Masukan 3 angka :");
  scanf("%d %d %d",&a,&b,&c);
  
    if (a<b) 
    if (a<c)
        result=a;
    else
        result=c; 

    else if(b<c)
        result=b;
    else 
        result=c;

printf ("Nilai terkecil adalah : %d \n, result");

}