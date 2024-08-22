#include<stdio.h>
struct polynomial
{
  int coeff;
  int expo;
} poly[100];
int main()
{
	int d,i;
	printf("Enter the no of terms");
	scanf("%d",&d);
	for(i=0;i<d;i++)
	{
	printf("Enter the coefficient and polynomial of term %d",i+1);
	scanf("%d%d",&poly[i].coeff,&poly[i].expo);
	}
	
	printf("The polynomial is\n");
	for(i=0;i<d;i++)
	{
		printf("%dx^%d",poly[i].coeff,poly[i].expo);
		if(poly[i].expo>0)
		printf("+");
		
	}
}
