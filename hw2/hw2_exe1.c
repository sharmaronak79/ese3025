/*
 ============================================================================
 Name        : xexerc1.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdlib.h>
#include<stdio.h>
int fadd(int *a, int *b)
{
int sum=0;
int x;
int y;
x=*a;
y=*b;
sum =x+y;


return sum;
}


int main(void)
{
int a=3;
int b=2;
printf("sum is %d", fadd(&a,&b));

return 0;

}
