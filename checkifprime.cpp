#include<stdio.h>
int main()
{
	int n,i,isprime;
	printf("Enter a number");
	scanf("%d",&n);
	if(n==1||n==0)
	printf("The number is neither prime nor composite");
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				isprime=0;
				break;
			}
			else
			{ 
			 isprime=1;
			}
		}
		if(isprime==1)
		printf("The number is prime");
		else
		printf("it is a composite number");
	}
}