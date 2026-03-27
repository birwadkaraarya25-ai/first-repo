#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
  int n,i;
printf("enter how many ramdom numbers to generate:");
scanf("%d",&n);
srand(time(0));
for(i=1;i<=n;i++)
{
printf("%d\n",rand());
}
}
