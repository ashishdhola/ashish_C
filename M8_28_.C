// to find triangle
//    upper
//    midel
//    lower
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],total[3][3];
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
	printf("\n\n-----array:A----\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n--lower tringle--\n");
	total[i][j]=a[2][1]+a[2][0]+a[1][0];
	printf("\n\t%d",total[i][j]);
	printf("\n--uper tringle--\n");
	total[i][j]=a[0][1]+a[0][2]+a[1][2];
	printf("\n\t%d",total[i][j]);
	printf("\n--midle tringle--\n");
	total[i][j]=a[0][0]+a[1][1]+a[2][2];
	printf("\n\t%d",total[i][j]);

	getch();
}
