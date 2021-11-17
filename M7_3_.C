// find month for 31 days,30 days ,and 28;
#include<stdio.h>
#include<conio.h>
void main()
{
	int month;
	clrscr();
	printf("enter month:");
	scanf("%d",&month);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	printf("\n 31 day in this month");
	else if(month==4||month==6||month==9||month==11)
	printf("\n 30 day in this month");
	else
	printf("\n 28or29 day in this month");
	getch();
}