#include<stdio.h>
#include<conio.h>
void main()
{
int b,a;
float x=0;
clrscr();
scanf("%d",&a);
b=(a-1)/200;
printf("%d\n",b);
switch(b)
{
default:
x=x+(a-600);
a=600;
case 2:
x=x+0.8*(a-400);
a=400;
case 1:
x=x+0.65*(a-200);
a=200;
case 0:
x=x+0.5*a;
}
printf("%.2f",x);
getch();
}