//  to make function
#include<stdio.h>
#include<conio.h>
void main()
{
	int square();
	clrscr();
	printf("\n x2:%d",square());
	getch();
}
int square()
{
	int x;
	printf("enter x:");
	scanf("%d",&x);
	return (x*x);
}
