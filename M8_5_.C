// to print 1,4,9,16,25;
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a;
	clrscr();
	for(a=1;a<=5;a++)
	if(a%2==1)
	printf(" %d ",a);
	else
	printf(" %.f ",pow(2,a));
	getch();
}