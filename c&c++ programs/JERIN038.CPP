#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[5][5]={1, 1, 1, 1,1,
	     1, 2, 3, 4,5,
	     1, 3, 6,10,15,
	     1, 4,10,20,35,
	     1, 5,15,35,69};
int x=1,i,j,b,c;
clrscr();
while(x!=5)
{
b=x-1;
c=pow(a[b][b],5-b);
for(i=x;i<5;++i)
{
for(j=x;j<5;++j)
{
a[i][j]=(a[b][b]*a[i][j]-a[i][b]*a[b][j])/c;
printf("%d\n",a[i][j]);
}
}
x=x+1;
}
printf("determinant=%d",a[4][4]);
getch();
}