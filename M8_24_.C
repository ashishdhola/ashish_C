// to print gst bill form
//
#include<stdio.h>
#include<conio.h>
void main()
{
	float product[3],qtu[3],price[3],i,total[3],gst[3],total_price[3];
	clrscr();
	for(i=1;i<=3;i++)
	{
		printf("\nenter product",i);
		scanf("%f",&product[i]);
		printf("qtu:",i);
		scanf("%f",&qtu[i]);
		printf("prise=",i);
		scanf("%f",&price[i]);
		total[i]=qtu[i]*price[i];
		printf("total=%.f",total[i]);
		gst[i]=total[i]*0.18;
		printf("\n gst=%.2f",gst[i]);
		total_price[i]=total[i]+gst[i];
		printf("\n%.2f",total_price[i]);
	}
		printf("\n---------------------------------------------------------------");
		printf("\nproduct qtu    price    total     gst  total_price");
		printf("\n-----------------------------------------------------------------");
		for(i=1;i<=3;i++)
		printf("\n%.f\t%.f\t%.f\t%.2f\t%.2f\t%.2f",product[i],qtu[i],price[i],total[i],gst[i],total_price[i]);
		printf("\n---------------------------------------------------------------");
	getch();
}