#include<stdio.h>
void main()
{
  int choice;
int i,fact=1,n;
float x,y,result=0;
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter two numbers:");
scanf("%f %f",&x,&y);
result=x+y;
printf("result=%f\n",result);
break;
case 2:
printf("enter two numbers:");
scanf("%f %f",&x,&y);
result=x-y;
printf("result=%f\n",result);
break;
case 3:
printf("enter two numbers:");
scanf("%f %f",&x,&y);
result=x*y;
printf("result=%f\n",result);
break;
case 4:
printf("enter two numbers:");
scanf("%f %f",&x,&y);
  if(y!=0)
{
result=x/y;
printf("result=%f\n",result);
}
else
{
printf("error\n")
}
break;
case 5:
printf("enter base and exponent");
scanf("%f %f",&x,&y);
result=1;
for(i=1;i<=y;i++)
{
result=result*x;
}
printf("result=%f\n",result);
break;
case 6:
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
fact=fact*i;
}
printf("%d\n",fact);
break;
default:
printf("wrong choice");
}
}

