#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
clrscr();
while(i<=255)
{
printf("%4d==%-4c",i,i);
i=i+1;
}
getch();
}