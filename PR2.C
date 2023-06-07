#include<stdio.h>
#include<conio.h>
void main(){
int a;
int i=0;
clrscr();
printf("enter the value of A:");
scanf("%D",&a);
do{
a=a/10;
i++;
}while(a!=0);
printf("%d",i);
getch();
}





















