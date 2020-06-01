#include<iostream.h>
#include<conio.h>
class mean
{
public:
int a[10];
int cp;
void input(int);
friend int  output(int);
};
void mean::input(int b)
{
int i;
cp=b;
cout<<"input values\n";
for(i=0;i<b;++i)
{
cin>>a[i];
}
}
int output(mean obj)
{
int i;
int total=0;
for(i=0;i<obj.cp;++i)
{
total=total+obj.a[i];
}
return (total/obj.cp);
}
void main()
{
int a,res;
mean obj[5];
clrscr();
for(int i=0;i<5;++i)
{
cout<<" number of elements to be entered:=";
cin>>a;
obj[i].input(a);
res=output(obj[i]);
cout<<"mean :=\n"<<res;
}
getch();
}