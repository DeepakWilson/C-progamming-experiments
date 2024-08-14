#include<stdio.h>
int main()
{
	int n,rev=0,r,orginal;
	printf("Enter a no");
	scanf("%d",&n);
	orginal=n;
	while(n>0)
      {
      	r=n%10;
      	rev=rev*10+r;
      	n=n/10;
	  }
	  printf("The reverse is %d\n",rev);
	if(orginal==rev)
	printf("the no is a palindrome");
	else
	printf("Not palindrome");
}