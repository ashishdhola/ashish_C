// print string 1:
// to string 2:
#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[10],str2[10];
	int i;
	clrscr();
	printf("enter string 1:");
	gets (str1);
	for(i=0;str1[i]!='\0';i++)
	str2[i]=str1[i];
	for(i=0;str2[i]!='\0';i++)
	str2[i]=str1[i];
	printf("string 2:%s",str2);
	getch();
}