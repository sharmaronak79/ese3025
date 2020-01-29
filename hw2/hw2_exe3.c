/*
 ============================================================================
 Name        : hw2_exe3.c
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
int data_arr[]={23,-7,62,58,97,109,33000,-2654};
size_t L=sizeof(data_arr)/sizeof(int);
printf("sum of elements in array is %d:\n",fsum(data_arr,L));
retuen 0;


}
