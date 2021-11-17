// to print sum of i=1;i<=10;= sum {'55'}
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	getch();
}

