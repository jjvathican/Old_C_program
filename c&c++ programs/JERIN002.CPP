#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
FILE *fp[24];
char ch;
int status,i,a,j,b;

 void work()
{

  while(ch!=EOF)
 {
 putc(ch, fp[a]);
 ch = fgetc(fp[0]);
 }
 fclose(fp[a]);
 ch='x';
 printf("\nwrited to %d",a);
 delay(10000);
 printf("\n%d is deleted",a);
}
void main()
{
clrscr();
printf("1:jerin jose 2:jerin jhoney 3:\n");
printf("enter no selected:");
scanf("%d",&a);
printf("repeatation:");
scanf("%d",&b);
fp[0] = fopen("g:\input.txt", "r");
for(i=0;i<=b;i++)
 {
switch(a)
{
case 1:
fp[a] = fopen("g:\output.txt", "a");
work();
status=remove("g:\output.txt");
break;
}
}
getch();
}