#include<stdio.h>
#include<conio.h>
void main()
{
int sum,i,j,k,m1[10][10],m2[10][10],r1,r2,c1,c2;
do
{
clrscr();
printf("enter r1 and c1\n");
scanf("%d%d",&r1,&c1);
printf("enter r2 and c2\n");
scanf("%d%d",&r2,&c2);
}while(c1!=r2);
printf("enter 1st matrix\n");
for(i=0;i<r1;++i)
{
for(j=0;j<c1;++j)
{
scanf("%d",&m1[i][j]);
}
}
printf("enter 2nd matrix\n");
for(i=0;i<r2;++i)
{
for(j=0;j<c2;++j)
{
scanf("%d",&m2[i][j]);
}
}
printf("matrix multiplication\n");
for(i=0;i<r1;++i)
{
for(j=0;j<c2;++j)
{
sum=0;
for(k=0;k<c1;++k)
{
sum=sum+(m1[i][k]*m2[k][j]);
}
printf("%3d",sum);
}
printf("\n");
}
getch();
}