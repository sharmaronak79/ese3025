/*
 ============================================================================
 Name        : turn2.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* myturn(void *arg)
{
	while(1)
	{
		sleep(1);
                                           //for(int i=1;i<=5;i++){
                                          //sleep(3);
  printf("my turn ! =  \n");
  return NULL;
	}
										  //}

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
	pthread_t newthread;
	pthread_create(&newthread,NULL,myturn,NULL);
                                                   //myturn();
yourturn();
return 0;

}
