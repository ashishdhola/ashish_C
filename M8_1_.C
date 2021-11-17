// to print table 1*1=1;
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a;
	clrscr();
	printf("enter num:");
	scanf("%d",&num);
	for(a=1;a<=10;a++)
	printf("\n %d*%d=%d",num,a,(num*a));
	getch();
}