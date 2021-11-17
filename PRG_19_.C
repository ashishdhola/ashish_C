// to find wich number
//	if (a<2000 || a>3000)
//	if (b>100 && b<500)

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if (a<2000 || a>3000)
	printf("\n (%d) a value",a);
	if (b>100 && b<500)
	printf("\n (%d) b value",b);
	getch();
}

