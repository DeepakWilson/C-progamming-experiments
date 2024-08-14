#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int cv=0;
	fp=fopen("hello.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		cv++;
	}
	printf("There are %d vowels",cv);
	fclose(fp);
}