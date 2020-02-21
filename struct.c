/*
 ============================================================================
 Name        : practise.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student
{
int roll;
int marks[5];
char name[10];
};

int main()
{
	struct student stu;
	int i,sum=0;
	printf("enter roll number : ");
	scanf("%d",&stu.roll);
	printf("enter name : ");
	scanf("%s",stu.name);


	printf("enter marks for five subjects : \n");

	for(i=0;i<5;i++)
	{
		scanf("%d ",stu.marks[i]);
		sum=sum+stu.marks[i];
	}

	printf("roll number : %d \n",stu.roll);
	printf("student name : %s \n",stu.name);
	printf("students marks : \n");
	for(i=0;i<5;i++)
	{printf(" %d ",stu.marks[i]);}
printf("total is %d ", sum);
return 0;

}
