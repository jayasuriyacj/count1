#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
clrscr();
printf("\n enter a number:");
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("\n total digit is:%d",count);
getch();
}
