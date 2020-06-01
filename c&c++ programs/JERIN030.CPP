#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],ch;
int i,b=0,d=0,e,f=0;
clrscr();
gets(a);
for(i=0;a[b+1]!='\0';++i)
{
if(a[i]==' '||a[i]=='\0')
{
b=i-1;
for(e=f;e<b;++e)
{
ch=a[e];
a[e]=a[b];
a[b]=ch;
b=b-1;
}
f=i+1;
}
}
for(i=0;a[i]!='\0';++i)
{
printf("%c",a[i]);
}
getch();
}
