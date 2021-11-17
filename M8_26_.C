// 2 dimenshn array ma two array pasepase lavava
//     --martix1---  ---matrix2---
//       1  1  3           1   1   1
//       1  2  4           2   2   2
//       1  3  5           3   3   3
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n-----array:1-----\t-----array:2----\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	getch();
}

