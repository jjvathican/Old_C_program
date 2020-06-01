#include<stdio.h>
#include<conio.h>
int i,j,r,c;
float rsum,csum[10],a[10][10];
void read()
{
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
scanf("%f",&a[i][j]);
}
}
}
void calc()
{
if(i==0)
csum[i]=0;
rsum=rsum+a[i][j];
csum[j]=csum[j]+a[i][j];
}
void print()
{
for(i=0;i<r;++i)
{
rsum=0;
for(j=0;j<c;++j)
{
printf("%.1f ",a[i][j]);
calc();
}
printf("%.1f\n",rsum/c);
}
for(j=0;j<c;++j)
{
printf("%.1f ",csum[j]/r);
}
}

void main()
{
clrscr();
printf("enter rows and coloum:");
scanf("%d%d",&r,&c);
read();
print();
getch();
}

