// pattern using  text color;
// for enter color on text&pattern
// type
// textcolor(enter the number of color);
// and for use color you mast write<< cprintf >>for use color
// cprintf();
// and enter random color use this
// textcolor(rand()%100)
#include<stdio.h>
#include<conio.h>
int i,j,sp=1;
void getpiramid(int n)
{
	for(i=0;i<=n;i++)
	{
		textcolor(rand()%60);
		for(j=1;j<=40+sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			cprintf("* ");
		}
		printf("\n");
		sp--;
	}
}
void main()
{
	clrscr();
//	textcolor();
	getpiramid(3);
	sp=1;
	getpiramid(5);
	sp=1;
	getpiramid(7);
	getch();
}