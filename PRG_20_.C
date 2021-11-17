// find gross salery
//
//

#include<stdio.h>
#include<conio.h>
void main()
{
	float bs,hra,da,gs,_hra_,_da_;
	clrscr();
	printf("enter basic pay:");
	scanf("%f",&bs);
	printf("enter hra:");
	scanf("%f",&hra);
	printf("enter da:");
	scanf("%f",&da);
	_hra_=bs*hra/100;
	printf("\n _hra_=(%.2f)",_hra_);
	_da_=bs*da/100;
	printf("\n _da_=(%.2f)",_da_);
	gs=bs+_hra_+_da_;
	printf("\n gross salary=(%.0f)",gs);
	getch();
}
