#include<stdio.h>
#include<conio.h>
#include<string.h>
#define s 10
struct student_record
{
char name[20];
int mark;
struct birth
{
int date;
int month;
int year;
}dob;
}stu[s];
void main()
{
int i,j,b,a=0,tem;
char tem1[20];
clrscr();
for(i=0;i<s;++i)
{
printf("\n Name   :");
scanf("%s",stu[i].name);
printf("\n Mark   :");
scanf("%d",&stu[i].mark);
printf("\n DOB    :");
scanf("%d/%d/%d",&stu[i].dob.date,&stu[i].dob.month,&stu[i].dob.year);
}
for(i=0;i<s-1;++i)
{
a=stu[i].mark;
b=i;
for(j=i+1;j<s;++j)
{
if(a<stu[j].mark)
{
a=stu[j].mark;
b=j;
}
}
tem=stu[i].mark;
stu[i].mark=stu[b].mark;
stu[b].mark=tem;
strcpy(tem1,stu[i].name);
strcpy(stu[i].name,stu[b].name);
strcpy(stu[b].name,tem1);
tem=stu[i].dob.date;
stu[i].dob.date=stu[j].dob.date;
stu[j].dob.date=tem;
tem=stu[i].dob.month;
stu[i].dob.month=stu[j].dob.month;
stu[j].dob.month=tem;
tem=stu[i].dob.year;
stu[i].dob.year=stu[j].dob.year;
stu[j].dob.year=tem;
}
printf("Name   Mark   DOB\n");
for(j=0;j<s;++j)
{
printf("%-8s",stu[j].name);
printf("%-5d" ,stu[j].mark);
printf("%d/%d/%d \n",stu[j].dob.date,stu[j].dob.month,stu[j].dob.year);
}
getch();
}
