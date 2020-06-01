#include<stdio.h>
#include<conio.h>
void main()
{
int a=152,b=0,arm=0,n=0;
clrscr();
n=a;
while(a!=0)
{
b=a%10;
arm=arm+(b*b*b);
a=a/10;
}
if(n==arm)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
getch();
}