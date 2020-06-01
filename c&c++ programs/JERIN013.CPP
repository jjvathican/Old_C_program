#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=1,sum=0;
clrscr();
for(i=6;i<=100;i=i+6)
{
if(i%6==0&&i%4!=0)
{
printf("%d.%d\n",n++,i);
sum=sum+i;
}
}
printf("sum=%d",sum);
getch();
}