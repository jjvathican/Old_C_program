#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int v,a[10],i,c,q,s,r,m,x=25,y=0,z=0,d=1;
char ch,b[100];
FILE *fp1,*fp2;
void fun(int a,int b,int c,int d,int e,int f)
{
int m,n,o;
for(m=a;m<24;++m)
{
for(n=b;n<60;++n)
{
for(o=c;o<60;++o)
{

if(m==d&&n==e&&o==f)
{
goto xyz;
}
if(++x==60)
{
x=0;
if(++y==60)
{
y=0;
if(++z==24)
{
z=0;
}
}
}
}
c=0;
}
b=0;
}
xyz:
}
void main()
{
clrscr();
if ((fp1=fopen("E:\\program.txt","r"))==NULL){
printf("Error! opening file");
getch();
exit(1);
}
fp2=fopen("E:\\pk2.txt","w");
if(fp2==NULL)
{
printf("Error!");
getch();
exit(1);
}
do
{
fscanf(fp1,"%d %d:%d:%d,%d --> %d:%d:%d,%d",&v,&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
fprintf(fp2,"%d\n",d);
printf("%d\n",d);
if(d>1)
fun(q,s,r,a[0],a[1],a[2]);
fprintf(fp2,"%d:%d:%d,%d --> ",z,y,x,a[3]);
fun(a[0],a[1],a[2],a[4],a[5],a[6]);
q=a[4];
s=a[5];
r=a[6];
fprintf(fp2,"%d:%d:%d,%d",z,y,x,a[7]);
c=0;
while(c!=3)
{
ch = fgetc(fp1);
if(ch=='\n')
++c;
fprintf(fp2,"%c",ch);
}
fprintf(fp2,"\n");
}while(++d!=795);
fclose(fp2);
fclose(fp1);
getch();
}