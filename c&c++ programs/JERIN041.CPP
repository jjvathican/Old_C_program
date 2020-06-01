#include<stdio.h>
#include<conio.h>
#include<string.h>
int fun(char ch[],int x);
void main()
{
char num[50];
int i,len,ans;
clrscr();
printf("Enter a number: ");
gets(num);
len = strlen(num);
ans=fun(num,len);
printf("%d", ans);
getch();
}
int fun(char ch[],int x)
{
int result=0,i;
for(i=0; i<x; i++)
{
result = result * 10 + ( ch[i] - '0' );
}
return result;
}