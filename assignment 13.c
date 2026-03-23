#include<stdio.h>
void main()
{
  int num,reverse=0,rem;
printf("enter the number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
printf("the reversed number is=%d",reverse);
}
