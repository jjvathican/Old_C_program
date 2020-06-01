#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int n,i,r,m=100,j,z,q=0,a1=0,a2=0,b;
int c[50],a[12],o;
int f[]= {'B','I','N','G','O','\0'};
for(o=0;o<12;++o)
{a[o]=0;}
for(i=0;i<m;++i)
{
do
{
clrscr();
printf("LETS PLAY BINGO\n\n");
for(j=0;j<i&&j<25;++j)
{
printf("%3d",c[j]);
if((j+1)%5==0)
{
printf("\n");
}
}
if(i>=25)
{
for(b=0,n=0;b<=11&&i>28;++b)
{
if(a[b]==5)
{
printf("%c ",f[n]);
n=n+1;
if(n==5)
{
printf("\nyou won ");
goto xyz;
}
}
}
printf("\n...delete:");
q=25; //
}//
scanf("%2d",&c[i]);
if(c[i]==78)
{goto xyz;}
for(z=q;c[z]!=c[i];++z);
}while(c[i]>25||z!=i||c[i]<=0);
if(i>=25)
{
for(r=0;c[r]!=c[i];++r);
c[r]=0;//
if(r%4==0&&r<21&&r!=0)
{a[10]++;}
if(r%6==0)
{a[11]++;}
a1=r%5;
a[a1]=a[a1]+1;
a2=(r/5)+5;
a[a2]=a[a2]+1;
}
}
xyz:
getch();
}