// find the larjest value
#include<stdio.h>
#include<conio.h>
void main()
{
	char a=10,b=45,c=26;
	clrscr();
	if (a>b&&a>c)
	printf("a is largest");
	else if (b>c)
	printf("b is largest");
	else
	printf("c is largest");
	getch();
}