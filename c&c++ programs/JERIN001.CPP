#include<stdio.h>
#include<conio.h>
int main()
{
int a=0,r=1,i,n=10;
for(i=0;i<n;i=i+2)
{
printf("-%d-%d",a,r);
a=a+r;
r=a+r;
}
return 0;
}
