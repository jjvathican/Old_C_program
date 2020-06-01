#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i=0,n=0,m=2,j;
int c[100], q=0,d=0,a[10];
clrscr();
printf("enter no : ");
do{
scanf("%d",c[i]);
if(c[i]=='\0')
{
printf(" ");
a[n]=d;
q=1;
d=0;
n=n+1;
}
else
{
printf("%d",c[i]);
d=(d*q)+c[i];
q=10;
}
if(n==m)
{break;}
i++;
}while(1);
for(j=0;j<m;++j)
{
printf("\n%c",a[j]);
}
getch();
}