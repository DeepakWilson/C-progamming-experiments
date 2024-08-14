#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("the original numbers are %d and %d",a,b);
}
void swap(int x,int y)
{ 
   int temp;
   temp=x;
   x=y;
   y=temp;
   printf("the numbers are %d and %d\n",x,y);
}