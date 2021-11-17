//with return no argument
#include<stdio.h>
#include<conio.h>
void main()
{
	void dosum();
	clrscr();
	printf("\n x+y= %d",dosum());
	getch();
}
int dosum()
{
	int x,y;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);
	return(x+y);
}


