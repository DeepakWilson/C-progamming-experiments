#include<stdio.h>
int main()
{
	char s[50],r[50];
	int i,j,l;
	printf("Enter the string");
	gets(s);

	
	for(i=0;s[i]!='\0';i++)
	{
		l++;
	}
	
	i=l;
	
	for(j=0;j<l;j++)
	{
		r[j]=s[i-1];
	    i--;
	}
	printf("reverse=%s",r);
	
}