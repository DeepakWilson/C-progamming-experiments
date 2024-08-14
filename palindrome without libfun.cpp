#include<stdio.h>
int main()
{
	int i,j,k,flag;
	char a[100];
	printf("Enter string");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	k=i-1;
	flag=0;
	for(i=0,j=k;i<j;i++,j--)
	{
		if(a[i]!=a[j])
    	{
		flag=1;
		break;
    	}
	}
	if(flag==0)
	printf("palindrome");
	else
	printf("Not palindrme");
}