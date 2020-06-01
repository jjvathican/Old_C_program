#include<stdio.h>
#include<conio.h>
void main()
{
int i,b,a;
int *p;
clrscr();
printf("enter size :");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",p+i*2);
}
while(i>0)
{
i=i-1;
printf("%d ",*(p+i*2));
}
getch();
}