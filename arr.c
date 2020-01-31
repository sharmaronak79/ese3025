/*
 ============================================================================
 Name        : arr.c
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
int arr[50],i,n,key,loc;

printf("Howmany elements you want to insert? : ");
scanf(" %d",&n);
printf("u can add %d elements in array \n",n);

printf("\n enter each elements and press enter : \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
};

printf("now your array is:");
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
};

printf("\nwhich element u want to insert: ");
scanf("%d",&key);
printf("at which location? : ");
scanf("%d",&loc);

for(i=n-1;i>=loc;i--)
{
arr[i+1]=arr[i];
};
arr[loc]=key;
printf("now new array is :");
for(i=0;i<=n;i++)
{
printf("%d ",arr[i]);
};

}
