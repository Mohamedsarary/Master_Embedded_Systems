/*
 ============================================================================
 Name        : EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 Author      : Mohamed Sarary
 Created on  : Dec 24, 2022
 Description : EX4 C Program to Print the Elements of an Array in reverse order
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int num[10];
	int i = 0 ;
	int size ;
	int *ptr=num ;

	printf("please enter the number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);

	printf( " input %d elements \n",size);

	for(i=1 ; i<=size ; i++)
	{
	  printf( " element - %d : ",i);
	  fflush(stdin); fflush(stdout);
	  scanf("%d",&*ptr);
		ptr++ ;
	}

	ptr=&num[size-1];

	printf("reversed elements is : ");
	for(i=1 ; i<=size ; i++)
		{

		printf(" %d ",*ptr);
			ptr-- ;
		}
}
