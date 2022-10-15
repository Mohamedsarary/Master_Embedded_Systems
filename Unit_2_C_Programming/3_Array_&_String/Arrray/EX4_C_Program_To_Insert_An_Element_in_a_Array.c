/*
 * EX4_C_Program_To_Insert_An_Element_in_a_Array.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include<stdio.h> 

void main () 

{   int arr[10];
int num_elements , location , element_inserted ;  
int i  ;

/* Assign number of elements from user */
printf("please enter the number of the elements : ");
fflush(stdout); fflush(stdin);
scanf("%d",&num_elements);

/* Assign the elements from user */
for (i=0 ; i < num_elements ; i++ )
{
	printf("Enter a%d element : ",i+1);
	fflush(stdout); fflush(stdin);
	scanf("%d",&arr[i]);		
}

/* print the values which got from user */
for(i=0 ; i<num_elements ; i++)
{
	printf("%d ",arr[i]);

}

/* get the element to be inserted and the location */
printf("\n please enter the element to be inserted : ");
fflush(stdout); fflush(stdin);
scanf("%d",&element_inserted);

printf("please enter the Location : ");
fflush(stdout); fflush(stdin);
scanf("%d",&location);

/* insert new value */
for(i=num_elements-1 ; i>0 ; i--)
{
	arr[i+1]= arr[i];

	if(arr[i]=location)
	{
		arr[i] = element_inserted	;
	}
}


for(i=0 ; i<num_elements+1 ; i++)
{
	printf("%d ",arr[i]);

}
}