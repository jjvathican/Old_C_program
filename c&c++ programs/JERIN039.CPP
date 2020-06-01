#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char word[]="hai  the  wha t he  thethe the ";
int a,i,j,k;
clrscr();
for(i=0;word[i]!='\0';++i)
{
for(j=i;word[j]==' ';++j);
a=j-i;
if(a>=2)
{
for(k=j;word[k]!='\0';++k)
{
word[a+k]=word[k];
}
}
}
printf("%s",word);
getch();
}