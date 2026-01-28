#include<stdio.h>
void main()
{
  float basic,hra,ta,gross,tax,net;
printf("enter basic salary=");
scanf("%f",&basic);
hra=0.10*basic;
ta=0.05*basic;
gross=basic+hra+ta;
tax=0.02*gross
net=gross-tax;
printf("\n basic salary=%f",basic);
printf("\n hra=%f",hra);
printf("\n ta=%f",ta);
printf("\n professional tax=%f",tax);
printf("\n net salary=%f",net);
}
