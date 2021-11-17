//no return with argument
#include<stdio.h>
#include<conio.h>
void main()
{
	void dosum(int,int);
	int x,y;
	clrscr();
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);
	dosum(x,y);
	getch();
}
void dosum(int x,int y)
{
	printf("\n x+y:%d",x+y);
}