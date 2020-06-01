#include<stdio.h>
#include<conio.h>
int fun(int* ar,int s)
{
int c=6,n=c/2;
while(*(ar+n)!=s)
{
if(*(ar+n)<s)
n=(n+c+1)/2;
else
{
c=n;
n=n/2;
}
}
return n+1;
}
void main()
{
int ar[]={1,3,4,6,7,8,9},s;
clrscr();
printf("Enter value to find\n");
scanf("%d",&s);
printf("%d",fun(ar,s));
getch();
}

