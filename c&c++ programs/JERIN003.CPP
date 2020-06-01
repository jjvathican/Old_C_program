#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a=6,b=20,c=4;
float x,y,r1=0,r2=0;
clrscr();
if((b*b)>(4*a*c))
{
y=sqrt((b*b)-(4*a*c));
if(y>0)
{
r1=((-b+y)/(2*a));
r2=((-b-y)/(2*a));
printf("\n r1=(%f),r2=(%f)",r1,r2);
}
else if(y==0)
{
r1=((-b+1)/(2*a));
r2=((-b-1)/(2*a));
printf("\n r1=(%f),r2=(%f)",r1,r2);
}
}
else
{
printf("not defined");
}
getch();
}
