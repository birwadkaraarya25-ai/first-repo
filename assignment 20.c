by call
#include<stdio.h>
int swap(int a,int b)
{
int temp;
   temp=a;
   a=b;
   b=temp;
   printf("a=%d,b=%d\n",a,b);

}
void main()
{
   int a,b;
   printf("enter the two numbers:");
   scanf("%d%d",&a,&b);
   swap( a, b);
   printf("a=%d,b=%d",a,b);
}

