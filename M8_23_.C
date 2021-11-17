//  to print array 1
//  or print array 2
//
//           1   4  =  5
//           2   5  =  7
//           3   6  =  9
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	printf("\n%d\t%d\t=%d",a[i],b[i],a[i]+b[i]);
	getch();
}
