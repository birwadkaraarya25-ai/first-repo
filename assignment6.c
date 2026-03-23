(without recursion)
#include<stdio.h>
void main()
{
int i,n,fact=1;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of number is=%d",fact);
}




(with recursion)
#include<stdio.h>
int fact(int n)
{
  if (n==0||n==1)
    return 1;
else
    return n*fact(n-1);
}
void main()
{
  int n;
printf("enter the number:");
scanf("%d",&n);
printf("the factorial of number is:%d",fact(n));
}
