// to print  total of too sum\
//      25
//      30
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,total=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		if(i%2)
		sum=sum+i;
		else
		total=total+i;
	}
	printf("%d",sum);
	printf("\n%d",total);
	getch();
}

