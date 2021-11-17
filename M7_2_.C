// find the electric units bill
#include<stdio.h>
#include<conio.h>
void main()
{
	float units,final_bill;
	clrscr();
	printf("enter units:");
	scanf("%f",&units);
	if(units<=101)
	final_bill=units*0.6+50;
	else if(units>=101 && units<=301)
	final_bill=110+(units-100)*0.8;
	else
	final_bill=270+(units-300)*0.9;
	if (final_bill>=300)
	{
	final_bill=final_bill*1.15;
	printf("\n--->\t%.2f",final_bill);
	}
	printf("\n your (%.0f)units \t your bill is Rs=(%.2f)",units,final_bill);
	getch();
}