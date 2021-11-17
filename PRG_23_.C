// to find tax or slab
#include<stdio.h>
#include<conio.h>
void main()
{
	float slab,tax,TAX;
	clrscr();
	printf("enter slab:");
	scanf("%f",&slab);
	printf("enter tax:");
	scanf("%f",&tax);
	TAX=slab*tax/100;
	printf("\n TAX=(%.2f)",TAX);
	if(slab<2500)
	printf("\n no tax",slab);
	else if (slab>2500||slab<5000)
	printf("\n slab=(%.0f)\t tax=(%.2f)",slab,TAX);
	else if (slab>5000||slab<10000)
	printf("\n slab=(%.0f)\t tax=(%.2f)",slab,TAX);
	else
	printf("\n slab=(%.0f)\t tax=(%.2f)",slab,TAX);
	getch();

}
