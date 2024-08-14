#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("Enter a range");
	scanf("%d",&n);
	fib(n);
	printf("the series is");
	for(i=1;i<=n;i++)
	{
		printf(" %d\t",fib(i));
	}
	
}
int fib(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
