#include<stdio.h>
#include<conio.h>
void main()
{
int a=2012;
clrscr();
if((a%4==0&&a%100!=0)||a%400==0)
{
printf("its leap year");
}
getch();
}
