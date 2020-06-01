#include<stdio.h>
#include<conio.h>
void main()
{
int a,y=21;
clrscr();
printf("you have 21 matchstick you can atleast take 4 matchstick at a time. if you are left with one you fail");
while(y!=1)
{
printf("your turn:");
scanf("%d",&a);
printf("com  turn:%d\n",5-a);
y=y-5;
printf("left     :%d\n",y);
}
printf("computer won the match");
getch();
}