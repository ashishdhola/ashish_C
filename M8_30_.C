// to print revers string
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10];
	int i;
	clrscr();
	printf("enter string:");
	gets (str);
	for(i=0;str[i]!='\0';i++)
	{}
	printf("revers string:");
	for(i=i-1;i>=0;i--)
		printf("%c",str[i]);
	getch();
}