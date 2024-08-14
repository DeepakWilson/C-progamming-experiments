/*Write a C Program to check if a given number is a strong number or not. 
A strong number is a number in which the sum of the factorial of the digits is equal to the number itself.
 Eg:- 145=1!+4!+5!=1+24+120=145*/
#include<stdio.h>
int main()
{
	int n,i,temp,digit=0,fac=1;
	printf("Enter a no.");
	scanf("%d",&n);
	printf("The digits are \n");
	while(n>0)
	{
		temp=n%10;
		printf("%d\t",temp);
		for(i=1;i<=temp;i++)
{
fac=fac*i;
}
printf("The factorial is %d",fac);
		n=n/10;
	}

}