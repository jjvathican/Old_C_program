#include<stdio.h>
#include<conio.h>
void main()
{
int a=7,b=0,i=0,s,e;
clrscr();
printf("starting:");
scanf("%d",&s);
printf("ending  :");
scanf("%d",&e);
printf("prime no:");
for(a=s;a<=e;++a)
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
