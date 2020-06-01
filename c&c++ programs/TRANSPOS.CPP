#include<iostream.h>
#include<conio.h>
class class1
{
public:
int arr[50][50];
void read(int);
void disp(int);
void tran(int);
}  ;

void class1::read(int a)
{
int i,j;
for(i=0;i<a;++i)
{
for(j=0;j<a;++j)
{
cout<<"enter "<<i<<" : "<<j<<"=";
cin>>arr[i][j];
}
}
}

void class1::disp(int a)
{
int i,j;
cout<<"entered array is :\n";
for(i=0;i<a;++i)
{
for(j=0;j<a;++j)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
}

void class1::tran(int a)
{
int i,j;
cout<<"transposed array is :\n";
for(i=0;i<a;++i)
{
for(j=0;j<a;++j)
{
cout<<arr[j][i]<<" ";
}
cout<<"\n";
}
}


void main()
{
class1 obj;
int len;
clrscr();
cout<<"enter the length of row or coloum\n";
cin>>len;
obj.read(len);
obj.disp(len);
obj.tran(len);
getch();
}