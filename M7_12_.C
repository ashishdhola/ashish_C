//to print cpital'A'=small 'a'
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch='A';ch<='Z';ch++)
	printf(" %c=%c ",ch,ch+32);
	getch();
}