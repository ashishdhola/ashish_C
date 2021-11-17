//no return no argument
#include<stdio.h>
#include<conio.h>
void main()
{
	void dosum();
	clrscr();
	dosum();
	getch();
}
void dosum()
{
	int x,y;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);
	printf("\n x+y=%d",x+y);
}


