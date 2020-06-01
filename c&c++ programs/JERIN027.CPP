#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,b[6]={0,0,0,0,0,0},a;
clrscr();
for(i=0;i<10;++i)
{
scanf("%d",&a);
for(j=0;a>(j+1)*10;++j);
b[j]=b[j]+1;
}
for(j=1;j<=6;++j)
{
printf("the mark below %d is %d\n",j*10,b[j-1]);
}
getch();
}
