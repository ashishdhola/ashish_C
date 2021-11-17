//to print sum of '3' array
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,t[3];
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		t[i]=a[i]+b[i];
		printf("\n total=%d",t[i]);

	}
	getch();
}