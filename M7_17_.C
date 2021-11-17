// to print series A,C,E,G,I.....n;
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch='A';ch<='Z';ch++)
	if(ch%2==1)
	printf(" %c  ",ch,ch+34);
	else
       //	printf(" %c ",ch+34);
	getch();
}