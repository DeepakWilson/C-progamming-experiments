#include<stdio.h>
int main()
{
	float a[100];
	int d,i;
	printf("Enter the degree of polynomial");
	scanf("%d",&d);
	if(d<1)
	{
		printf("The degree should be atleast 1");
	}
	else 
	{ 
	for(i=d;i>=0;i--)
	   {
	   printf("Enter the coefficient of x^%d\n",i);
	   scanf("%f",&a[i]);
	   }
 	}
 	printf("The entered polynomial is");
 	for(i=d;i>=0;i--)
 	{ 
 		if(a[i]!=0)
		 {
		   if(i==d)
		   printf("%fx^%d",a[i],d);  
           else if (i==1)
		   printf("+%fx",a[i]);
		   else if(i==0)
		   printf("+%f",a[i]);
	       else
		   printf("+%fx^%d",a[i],i);
		   }	
	}
}