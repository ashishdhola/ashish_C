#include<stdio.h>
#include<conio.h>
int i,j,sp=40;
void printinverted_piramid()
{
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		sp++;
	}
}
void main()
{
	clrscr();
	printinverted_piramid();
	getch();
}