/*
 * EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include<stdio.h>

void main ()
{
	float mat1[2][2];
	float mat2[2][2];
	float sum_mat[2][2];
	int i , j ; 

	printf("please enter the first matrix \n");

	for(i=0 ; i<2 ; i++ )
	{
		for ( j=0 ; j<2 ; j++ )
		{
			printf("please enter a%d%d : ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&mat1[i][j]);
		}
	}

	printf("please enter the Second matrix \n");

	for(i=0 ; i<2 ; i++ )
	{
		for ( j=0 ; j<2 ; j++ )
		{
			printf("please enter a%d%d : ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&mat2[i][j]);
		}
	}

	for(i=0 ; i<2 ; i++ )
	{
		for ( j=0 ; j<2 ; j++ )
		{

			sum_mat[i][j]=mat1[i][j]+mat2[i][j];

		}
	}
	
	printf("sum of Two Matrix\n");
	for(i=0 ; i<2 ; i++ )
	{
		for ( j=0 ; j<2 ; j++ )
		{

			printf("%0.2f ",sum_mat[i][j]) ;

		}
		printf(" \n ");
	}

}