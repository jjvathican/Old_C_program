#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char word[]="hai the wha the thethe the ";
char del[]="the";
int a,i,j;
clrscr();
printf("%d\n",strlen(del));
for(i=0;word[i]!='\0';++i)
{
for(a=0;word[i+a]==del[a];++a);
printf("%d  %d\n",a,i);
if(a==strlen(del)||a==4)
{
for(j=0;j<strlen(del);++j)
word[j+i]=' ';
}
}
printf("%s",word);
getch();
}