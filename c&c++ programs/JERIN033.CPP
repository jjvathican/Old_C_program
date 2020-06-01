#include<stdio.h>
#include<conio.h>
void main()
{
char word[]="abcdefg";
int i,j,k,a;
clrscr();
for(i=0;word[i]!='\0';++i);
for(j=0;j<i;++j)
{
for(a=0;a<i;++a)
{
k=(a+j)%i;
printf("%c",word[k]);
}
printf("\n");
}
getch();
}