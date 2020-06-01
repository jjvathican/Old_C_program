#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,i=0;
clrscr();
for(a=1;a<=100;++a)
{
b=a/2;
for(i=2;i<=b&&a%i!=0;++i);
if(i-1==b)
{
printf("%d:",a);
}
}
getch();
}
