#include<stdio.h>
#include<conio.h>
void fun(int x,int y)
{
int a,b,n,gcd,lcm;
a=x;
b=y;
while(n!=0)
{
n=a%b;
a=b;
b=n;
}
gcd = a;
lcm = (x*y)/gcd;
printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
}
void main()
{
int a,b;
clrscr();
printf("enter two values :");
scanf("%d%d",&a,&b);
fun(a,b);
getch();
}
