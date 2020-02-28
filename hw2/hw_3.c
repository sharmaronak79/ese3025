/*
 ============================================================================
 Name        : hw_3.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int compar(const void *pa,const void *pb); //declare compar finction

void filecopy(FILE *fptr); // declare filecopy function to copy file

/* declare structure with name data*/
struct data
{
char name[100];
char city[100];
};

typedef struct data dt; //declare variable for structure
dt db_array[100];

int main()
{
	FILE *fptr = fopen("data.txt","r");
	filecopy(fptr);
	size_t L = sizeof(db_array)/sizeof(dt);
	size_t M = sizeof(dt);

	qsort(db_array,L,M,compar);

	printf("The sorted records: \n");
	printf("\n name \t cityname \n");
	for(int i=0;i<100;i++)
	{

		printf("\n%s \t %s",db_array[i].name,db_array[i].city);

	}
	return 0;
}

/* function to copy contents from a file to different string arrays */
void filecopy(FILE *fptr)
{
	size_t nw=0;       // variable to scan word
	char word1[10],word2[10];   // array to store word
	while (fscanf(fptr,"%s%s",word1,word2) != EOF) // fscanf to scan file using file pointer fptr till to end of file
	{
		strcpy(db_array[nw].name,word1); // copy first word to name array
		strcpy(db_array[nw].city,word2); // copy second word to city array
		++nw;
	}
	fclose(fptr); //file close
}

/* compare function pas by pointer  */
int compar(const void *pa, const void *pb)
{
char *str_a= ((dt*) pa)->name;
char *str_b= ((dt*) pb)->city;
return strcmp(str_a,str_b);
}







