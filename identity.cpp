#include<stdio.h>
int main()
{
	int i,j,r,c,a[100][100];
	printf("Enter the rows and columns");
	scanf("%d%d",&r,&c);
	
	printf("The identity matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
	    	a[i][j]=1;
	    	else
	    	a[i][j]=0;
	     	printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	} 
}
	
	