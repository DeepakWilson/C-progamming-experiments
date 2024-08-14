#include<stdio.h>
int main()
{
	int a[100],n,i,j,*p,temp;
	printf("Enter the no of elemts");
	scanf("%d",&n);
	printf("Enter the elmnts");
	p=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\nThe sorted array is\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}