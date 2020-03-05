/*
 ============================================================================
 Name        : turn.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void myturn()
{
for(int i=1;i<=5;i++){
//sleep(3);
  printf("my turn ! = %d \n",i);
}

}

void yourturn()
{
	for(int j=1;j<=3;j++)
	{
printf("your turn ! = %d \n",j);
	}
}


int main(void)
{
myturn();
yourturn();
return 0;

}
