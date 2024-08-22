#include<stdio.h>
struct polynomial{
 int expo;
 int coeff;
 }poly[100];
void main()
{
 int i,d;
 printf("Enter the number of terms");
 scanf("%d",&d);
 for(i=0;i<d;i++)
 {
 printf("Enter the coefficient and exponent of term %d",i+1);
 scanf("%d%d",&poly[i].coeff,&poly[i].expo);
 }
printf("The polynomial is \n");
for(i=0;i<d;i++)
{
   printf("%dx^%d",poly[i].coeff,poly[i].expo);
   if(poly[i].expo>0)
   printf("+");
}
}

 
