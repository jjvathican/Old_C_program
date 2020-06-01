#include<stdio.h>
#include<conio.h>
void main()
{
double n=34537458734657;
FILE *fptr;
clrscr();
      while(1)
      {
      n=n+123847897;
      if(n<10)
      {}
      fptr=fopen("E:\chat.txt","a");
      fprintf(fptr,"%lf",n);
      fclose(fptr);
      }
 }