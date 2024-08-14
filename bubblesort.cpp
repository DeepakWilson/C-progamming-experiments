#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("Enter the no. of elemnts");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array before sorting is");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
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
   printf("After sorting=\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}