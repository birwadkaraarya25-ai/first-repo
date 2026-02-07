#include<stdio.h>
void main()
{
int a,b,c,d,e;
int total;
float percentage;
printf("enter the marks of five subjects:\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>=40 && b>=40 && c>=40 && d>=40 && e>=40)
total=a+b+c+d+e;
percentage=(total/500.0)*100;
printf("\n total marks=%d",total);
printf("\n percentage=%f",percentage);
printf("\n result:pass");
if(percentage>=75)
{
printf("\n Grade:distinction");
}
  else if(percentage>=60 && percentage<75)
{
printf("\n Grade: First Division");
}
  else if(percentage>=50 && percentage<60)
{
printf("\n Grade:Second Division");
}
else if(percentage>=40 && percentage<50)
{
printf("\n Grade: Third Division");
}
else
{
printf("\n result:fail");
printf("\n Grade: no grade");
}
}
