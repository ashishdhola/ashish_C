// find number is capitale orr samll
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter char:");
	scanf("%c",&ch);
	if(ch>=97)
	{
	printf("\n\t ch:(%c) is capitale",ch-32);
	}
	else
	{
	printf("\n\t ch:(%c) is samll ",ch+32);
	}
	getch();
}



















































