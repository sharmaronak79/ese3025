/*
 ============================================================================
 Name        : hw2_exe2.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i,j;
   int *pi;
   int *pj;

   i=3;
   j=-7;
   pi= &i;
   pj= &j;
printf("ADDress of i &  add of pi",i,pi);

pi=malloc(size(i));
pj=malloc(size(j));

*pi=3;
*pj=-7;
printf("add of i & add of pi",i,pi);

   return 0;
}
