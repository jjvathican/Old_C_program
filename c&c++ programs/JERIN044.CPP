#include<stdio.h>
#include<conio.h>
void display(int a[],int b)
   {
   int i,n,t;
   for(i=0;b>a[i]&&a[i]!='\0';++i);
   t=a[i];
   a[i]=b;
   for(;a[i]!='\0';++i)
   {
   n=a[i+1];
   a[i+1]=t;
   t=n;
   }
   for(i=0;a[i]!='\0';++i)
   {
   printf("%d",a[i]);
   }
   }
	 void main()
	 {
	    clrscr();
	    int c[4]={2,3,4,6},b;
	    printf("enter a no :");
	    scanf("%d",&b);
	    display(c,b);
	    getch();
	 }