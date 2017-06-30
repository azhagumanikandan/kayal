
#include<stdio.h>
#include<conio.h>
void main()
{
int year,n;
clrscr();
printf("\n enter the year");
scanf("%d",&year);
if((n%400==0)||(n%100==0)||(n%4==0))
{
printf("\n the year is not leap year");
}
else
{
printf("\n the year is leap year");
}
getch();
}
