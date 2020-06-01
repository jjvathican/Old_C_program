#include<stdio.h>
#include<conio.h>
void main()
{
char *p[5];
int i;
char j;
clrscr();
for(i=0;i<5;++i)
{
printf("enter %d names :",i+1);
scanf("%s",p[i]);
}
j=(*p[i]);

for(i=0;i<5;++i)
{
printf("enter %d names :%s  %d\n",i+1,p[i],j);
}
getch();
}