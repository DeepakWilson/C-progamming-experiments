#include<stdio.h>
int  main()
{
	int r,c,i,j,a[100][100],b[100][100];
	printf("Enter the no of rows and columns");
	scanf("%d%d",&r,&c);
	printf("Enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
		scanf("%d",&a[i][j]);
		}
	}
	printf("Original matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{ 
		 printf("%d\t",a[i][j]);
	    }
	printf("\n");
    }
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i]; 
		}
    }
printf("the transpose is\n");
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}
}