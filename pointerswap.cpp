#include<stdio.h>
int main()
{
int x=10,y=20, temp,*a,*b;
printf("\nBefore Swapping");
printf("\nValue of x is %d",x); //output 10
printf("\nValue of y is %d ",y); //output 20
a=&x;
b=&y;
temp= *a;
*a= *b;
*b=temp;
printf("\nAfter swapping");
printf("\nValue of x is %d \n",*a); //output 20
printf("\nValue of y is %d \n",*b);
}