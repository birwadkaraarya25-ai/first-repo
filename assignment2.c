#include<stdio.h>
void main()
{
  int choice;
  float a,b;
printf("enter choice=");
scanf("%d",&choice);
printf("enter a=");
scanf("%f",&a);
printf("enter b=");
scanf("%f",&b);
switch(choice)
{
case 1:
printf("add=%f",a+b);
break;
case 2:
printf("sub=%f",a-b);
break;
case 3:
printf("mul=%f",a*b);
break;
case 4:
printf("div=%f",a/b);
break;
default:
printf"wrong choice");
}
}

