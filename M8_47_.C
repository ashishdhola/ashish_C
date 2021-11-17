#include<stdio.h>
#include<conio.h>
int i,j,sp=40;
void getpiramid();
{
	for(i=0;i<=6;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		sp--;
	}
}
void main()
{
	clrscr();
	getpiramid():
	getch();
}