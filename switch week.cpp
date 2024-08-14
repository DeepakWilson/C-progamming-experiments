#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	switch(n)
	{
    case 1: printf("Monday");
	break;
	case 2: printf("tuesday");
	break;
	case 3: printf("wednesday");
	break;
	case 4: printf("thursday");
	break;
	default: printf("Unavailable");         
    }
}