// find wich number is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	if (a%2)
	{
	printf("\n %d is odd",a);
	}
	else
	{
	printf("\n %d is even",a);
	}
	getch();
}

