#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=0,i=0;
clrscr();
b=a/2;
for(i=2;i<=b&&a%i!=0;++i);
if(i-1==b)
{
printf("prime");
}
else
{
printf("not prime");
}
getch();
}
