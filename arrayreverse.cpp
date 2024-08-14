#include<stdio.h>
void main()
{
	int i,n,a[100];
	printf("enter the no.of elements");
	scanf("&d",&n);
	printf("Enter the needed elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is");
	 for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}