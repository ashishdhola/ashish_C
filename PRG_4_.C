// find total and pr
#include<stdio.h>
#include<conio.h>
void main()
{
	float maths,ss,scinc,english,total,pr;
	clrscr();
	printf("enter maths&ss&scinc&english");
	scanf("%f%f%f%f",&maths,&ss,&scinc,&english);
	printf("maths=%.0f",maths);
	printf("\nss=%.0f",ss);
	printf("\nscinc=%.0f",scinc);
	printf("\nenglish=%.0f",english);
	total=maths+ss+scinc+english;
	printf("\ntotal=%.0f",total);
	pr=total/4;
	printf("\n pr=%.2f",pr);
	getch();
}


