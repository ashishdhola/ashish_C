// to print capital string to small sring
//                  and capital top samll
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10];
	int i;
	clrscr();
	printf("enter string:");
	gets (str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
			str[i]=str[i]+32;
		else if(str[i]>=97&&str[i]<=122)
			str[i]=str[i]-32;
		else if(str[i]==32)
			str[i]=str[i];
	}
	printf("convert string:%s",str);
	getch();
}
