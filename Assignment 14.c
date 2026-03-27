#include<stdio.h>
#include<math.h>
void main()
{
  int decimal=0,bin,rem,i=0;
printf("enter the binary number:");
scanf("%d",&bin);
while(bin>0)
{
rem=bin%10;
decimal=decimal+rem*pow(2,i);
bin=bin/10;
i++;
}
printf("the decimal is=%d",decimal);
}
