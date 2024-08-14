#include<stdio.h>
int main()
{
	int n,original,r,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		r=n%10;
		sum=(r*r*r)+sum;
		n=n/10;
		
	}
	if(original==sum)
	printf("The no is armstrong");
	else
	printf("Not armstrong");
}