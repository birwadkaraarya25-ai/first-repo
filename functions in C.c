#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int fact(int);
void main()
{
  float a,b;
  int ch;
printf("-----menu-----\n");
printf("1.ADD\n");
printf("2.SUB\n");
printf("3.MUL\n");
printf("4.DIV\n");
printf("5.FACTORIAL\n");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1: 
  printf("enter two numbers:");
  scanf("%f%f",$a,&b);
  printf("addition=%f",(a,b));
break;
case 2:
  printf("enter two numbers:");
  scanf("%f%f",&a,&b);
  printf("substraction=%f",(a,b));
break;
case 3:
  printf("enter two numbers:");
  scanf("%f%f",&a,&b);
  printf("multiplication=%f",(a,b));
break;
case 4: 
  printf("enter two numbers:");
  scanf("%f%f",&a,&b);
  printf("division=%f",(a,b));
break;
  case 5:
  int n;
  printf("enter the number");
  scanf("%d",&n);
  printf("factorial=%d",fact(n));
  break;
default:
printf("wrong choice"):
  }
}
float add(float a , float b)
{
  return a+b;
}
float sub(float a , float b)
{
  return a-b;
}
float mul(float a , float b)
{
  return a*b;
}
float div(float a , float b)
{
  return a/b;
}
int fact(int n)
{
  int i , fact=1;
for(i=1;i<=n;i++)
{
  fact=fact*i;
}
return fact;
}



