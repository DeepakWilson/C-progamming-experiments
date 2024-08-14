#include<stdio.h>
#include<string.h>
int main()
{
	int len,size;
	char str[]="Hello world";
	len= strlen(str);
	size= sizeof(str);
	printf("The length is %d and size is %d",len,size);
	/*SIZEOF INCLUDE THE TERMINATING CHARACTER \0 */
}