// to print small'a'to'z':and: to print capital'Z'to'A';
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch='a';ch<='z';ch++)
	printf(" %c ",ch);
	printf("\n");
	for(ch='Z';ch>='A';ch--)
	printf(" %c ",ch);
	getch();
}
