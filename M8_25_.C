// 2 dimenshn array
//     ----maticx---
//           1    4    7
//           2    5    8
//           3    6    9
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n-----metrix-----\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}


