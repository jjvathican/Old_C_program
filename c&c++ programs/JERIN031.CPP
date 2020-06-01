#include<stdio.h>
#include<conio.h>
void fact(int x)
{
int f;
f=x*fact(x-1);
printf("%d\n",&f);
}
void main()
{
int a=10;
clrscr();
fact(10);
getch();
}