#include<stdio.h>
int main()
{
  int i;
  char str1[100],str2[100];
  printf("Enter a string");
  gets(str1);
  for(i=0;str1[i]!='\0';i++)
  {
  	str2[i]=str1[i];
  }
    str2[i]='\0';
   printf("The entered string is %s",str2);
}