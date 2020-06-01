#include<stdio.h>
#include<conio.h>
void main()
{
int a=23456,n=1;
clrscr();
for(n=1;a/n>10;n=n*10);
printf("first no:%d\n",a/n);
printf("last  no:%d",a%10);
getch();
}
