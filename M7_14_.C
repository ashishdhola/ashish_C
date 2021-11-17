// to print a,b,c,d
// (A),(b),(C),(d)
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=65;ch<=90;ch++)
	if(ch%2==1)
	printf(" %c ",ch);
	else
	printf(" %c ",ch+32);
	getch();
}
