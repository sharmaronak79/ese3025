/*
 ============================================================================
 Name        : lect_3_array.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int my_arr[]={81,32,-56,10,-75,90,49,159,-121,99};


int compare(void *pa,void *pb)
{
int a=*((int*)pa);
int b=*((int*)pb);
int ret=0;
if (a<b)
ret=-1;
else if(a>b)
ret=1;

return ret;
}


int main(void)
{

		int i;
		size_t L=sizeof(my_arr)/sizeof(int);

        printf("before sorting :");
		for (i=0; i<L; i++)
		printf ("%d ",my_arr[i]);

        printf("\n after sorting :");
        qsort (my_arr, L, sizeof(int), compare);

		for (i=0; i<L; i++)
			printf ("%d ",my_arr[i]);
		return 0;

}


/*
#include<stdio.h>
	#include<stdlib.h>

	int my_array[] = { 81,32,-56,10,-75,90,49,159,-121,99 };

	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}

	int main ()
	{
		int i;
		printf ("before sorting : ");
		for (i=0; i<10; i++)
					printf (" %d ",my_array[i]);
		qsort (my_array, 10, sizeof(int), comparetor );
		printf ("\n \n after sorting : ");
		for (i=0; i<10; i++)
			printf (" %d ",my_array[i]);
		return 0;
	}
*/


