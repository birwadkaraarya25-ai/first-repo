include<stdio.h>
struct student
{
   char name[20];
   int roll_no;
  float m1,m2,result;
};
void main()
{
  int i;
  struct student s[10];
printf("enter students details\n");
for(i=0;i<3;i++)
{
   printf("enter student name:");
   scanf("%s",s[i].name);
   printf("enter student roll number:");
   scanf("%d",&s[i].roll_no);
   printf("enter student marks");
   scanf("%f%f",&s[i].m1,&s[i].m2);
}
for(i=0;i<3;i++)
{
  s[i].result = (s[i].m1 + s[i].m2 / 2;
printf("\n----student %d----",i+1);
printf("\n name:%s",s[i].name);
printf("\n roll no:%d",s[i].roll_no);
printf("\n marks:%f%f",s[i].m1,s[i].m2);
printf("\n average:%f",s[i].result);
}
}


