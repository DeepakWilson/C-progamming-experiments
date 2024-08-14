#include<stdio.h>
int main()
{
	int a[100],i,n,large,small;
	printf("Enter the no. of elemnts");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the entered matrix is");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if (a[i]>large)
		large=a[i];
		if (a[i<small]);
		small=a[i];
    }
    printf("%d is the largest",large);
    printf("%d is the smallest",small);
	
}