#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll;
char name[10];
};

int main()
{
struct student stu[5];
int i;
printf("enter details for five students : \n");

for(i=0;i<5;i++)
{
printf("enter roll number for %d student:", (i+1));
scanf("%d", &stu[i].roll);
printf("enter name for %d student : ",i+1);
scanf("%s",stu[i].name);
}

printf("details for students :\n");
for(i=0;i<5;i++)
{
printf("detail for %d student : \n",i+1);
printf("Roll number : %d  \n", stu[i].roll);
printf("name : %s  \n",stu[i].name);
}
return 0;
}
