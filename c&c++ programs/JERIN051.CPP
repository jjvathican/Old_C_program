#include<stdio.h>
#include<conio.h>
char *fun(char *s1,char *s2)
{
int i,j;
printf("%c",*s2);
for(i=0;*(s1+i)!='\0';++i)
{
if(*(s1+i)==*s2)
{
for(j=i;*(s1+j)!='\0';++j)
{
*(s1+j)=*(s1+j+1);
}
}
}
return s1;
}
void main()
{
clrscr();
char s1[100],c[1];
printf("\nenter char :");
scanf("%s",c);
printf("enter string :");
scanf("%s",s1);
printf("the result=%s",fun(s1,c));
getch();
}

