#include<stdio.h>
#include<conio.h>
int gcd(int x,int y)
{
if(y==0)
{
return x;
}
return gcd(y,x%y);
}
void main()
{
int a,b,gcd1,lcm;
clrscr();
printf("enter two values :");
scanf("%d%d",&a,&b);
gcd1 = gcd(a,b);
lcm = (a*b)/gcd1;
printf("Greatest common divisor of %d and %d = %d\n", a, b, gcd1);
printf("Least common multiple of %d and %d = %d\n", a, b, lcm);
getch();
}
