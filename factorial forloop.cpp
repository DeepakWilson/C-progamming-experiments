#include<stdio.h>
int main()
{
	int n,i,fac=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("factorial=%d",fac);
}