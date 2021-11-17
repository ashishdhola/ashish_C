// find the gross_salary
#include<stdio.h>
#include<conio.h>
void main()
{
	float bs,hra,da,gross_salary;
	clrscr();
	printf("enter basic salary:");
	scanf("%f",&bs);
	if(bs<=5000)
	{
	hra=bs*0.8;
	da=bs*0.20;
	gross_salary=bs+hra+da;
	}
	else if(bs>=5000 && bs<=10000)
	{
	hra=bs*0.12;
	da=bs*0.30;
	gross_salary=bs+hra+da;
	}
	else if(bs>=10000 && bs<=15000)
	{
	hra=bs*0.15;
	da=bs*0.40;
	gross_salary=bs+hra+da;
	}
	else
	{
	hra=bs*0.20;
	da=bs*0.50;
	gross_salary=bs+hra+da;
	}
	printf("\n gross_salary=(%.2f)",gross_salary);

	getch();
}