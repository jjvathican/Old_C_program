#include<stdio.h>
#include<conio.h>
char *fun(int x)
{
switch(x)
{
case 1:return "january";break;
case 2:return "february";break;
}
}
void main()
{
int a;
clrscr();
printf("enter value :");
scanf("%d",&a);
printf("%s",fun(a));
getch();
}
