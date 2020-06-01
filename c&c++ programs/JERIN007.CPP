#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
clrscr();
char n[10];
int l,i;
printf("enter your name :");
gets(n);
l=strlen(n);
do
{
FILE *fptr,*fp;
char c[500],ch;
clrscr();
fp=fopen("d:\chat.txt","r");
while( ( ch = fgetc(fp) ) != EOF )
 { printf("%c",ch);}
fclose(fp);
fptr=fopen("d:\chat.txt","a");
printf("\n               || always press enterkey to update status ||");
printf("\nSEND  :");
gets(c);
if(c[0]=='')
{remove("d:\chat.txt");}
if(c[0]=='Q')
{exit(0);}
if(c[0]!='\0')
{
fprintf(fptr,"%s",n);
for(i=l;i<=10;++i)
{
fprintf(fptr," ");
}
fprintf(fptr,":%s\n",c);
fclose(fptr);
}
}
while(1);
}