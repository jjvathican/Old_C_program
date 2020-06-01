#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
clrscr();
int i,j,k,l;
int a[3][3][3][3];
for(i=0;i<=2;++i){
for(j=0;j<=2;++j){
for(k=0;k<=2;++k){
for(l=0;l<=2;++l){
printf("%d:%d:%d:%d ||",i+1,j+1,k+1,l+1);
scanf("%d",a[i][j][k][l]);
}}}}
getch();
}

