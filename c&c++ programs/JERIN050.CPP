#include<stdio.h>
#include<conio.h>
#define SIZE 50
void main()
{
int num,i,j;
int temp=0,tempe=0;
char tempn[50];
struct student
{
int eno ;
char name[50];
int avg;
} st[SIZE];
clrscr();
printf("Enter the number of students\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the name of the student\n");
scanf("%s",&st[i].name);
printf("Enter the enrollment number\n");
scanf("%d",&st[i].eno);
printf("Enter aggregate marks of enter students \n");
scanf("%d",&st[i].avg);
}
for(i=0;i<num-1;i++)
for (j=i+1;j<num;j++)
{
temp=0;tempe=0;
if (st[i].avg<st[j].avg)
{
temp=st[i].avg;
st[i].avg=st[j].avg;
st[j].avg=temp;
strcpy(tempn,st[i].name);
strcpy(st[i].name,st[j].name);
strcpy(st[j].name,tempn);
tempe=st[i].eno;
st[i].eno=st[j].eno;
st[j].eno=tempe;
}
}
for(i=0;i<num;i++)
{
printf("Enrollment number:%d\n name:%s\n",st[i].eno,st[i].name);
printf("Aggregate marks:%d\n Rank:%drank\n",st[i].avg,(i+1));
}
getch();
}