#include<stdio.h>
#include<conio.h>
void main()
{
int b=0,a=0,i=0,n=0;
clrscr();
scanf("%d",&a);
while(n!=a)
{
for(n=a;n/2!=b;n=n/2);
i=n%2;
printf("%d",i);
b=n;
}
getch();
}
