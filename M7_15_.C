// to print a,c,e,f;
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch='A';ch<='Z';ch++)
	if(ch%2==1)
	printf(" %c ",ch);
	getch();
}