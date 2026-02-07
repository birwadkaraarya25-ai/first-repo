#include<stdio.h>
void main()
{
  int num,originalnum , rem;
int sum=0;
printf("enter a three digit number:");
scanf("%d",&num);
originalnum=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==originalnum)
{
printf("it is an Armstrong number\n");
}
else
{
printf("it is not an Armstrong number\n");
}
}
