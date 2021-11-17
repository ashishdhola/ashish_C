//with return with argument
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	int dosum(int,int);
	clrscr();
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);
	z=dosum(x,y);
	printf("\n x+y=%d",z);
	getch();
}
	int dosum(int x,int y)
{
	return(x+y);
}
