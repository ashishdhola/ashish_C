//2 dimenshn array no sarvalo ex:(a=1+b=1=2)
//   -maartix-    -matrix-  --total--
//    1 1 3        1 3 4        1 1 1
//    2 2 3        2 3 4        1 1 1
//    3 3 3        3 3 4        1 1 1
//
//
//
//

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],total[3][3];
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
	printf("\n\n-----array:1----\t-----array:2----\t-----total-----\n\n");
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
		for(j=0;j<3;j++)
		{
			total[i][j]=a[i][j]+b[i][j];
			printf("%d\t",total[i][j]);
		}
		printf("\n");
	}
	getch();
}

