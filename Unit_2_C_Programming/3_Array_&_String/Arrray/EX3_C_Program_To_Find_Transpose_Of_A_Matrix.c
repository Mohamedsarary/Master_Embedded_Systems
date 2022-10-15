/*
 * EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include<stdio.h> 

void main () 

{
	int row , col ;
	int mat[100][100];
	int t_mat[100][100];
	int r , c ; 

	/* Assign rows&Columns from user */
	printf("Enter the number of rows : "); 
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&row);

	printf("Enter the number of Columns : "); 
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&col);
	printf("enter the elements of the Matrix\n");

	/* Assign Matrix elements from user */
	for( r=0 ; r <row ; r++ )
	{
		for (c=0 ; c<col ; c++ )
		{

			printf("Enter element a%d%d : ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&mat[r][c]);	

		}	
	}

	for( r=0 ; r <row ; r++ )
	{
		for (c=0 ; c<col ; c++ )
		{

			t_mat[r][c]=mat[c][r];
		}
	}

	/* Print the Entered Matrix before Transpose */
	printf("Entered Matrix\n");
	for( r=0 ; r <row ; r++ )
	{
		for (c=0 ; c<col ; c++ )
		{

			printf("%d ",mat[r][c]);
1 

		}	
		printf("\n");
	}

	/* Print the Entered Matrix After Transpose */
	printf("Transposed Matrix\n");
	for( r=0 ; r <row ; r++ )
	{
		for (c=0 ; c<col ; c++ )
		{

			printf("%d ",t_mat[r][c]);


		}	
		printf("\n");
	}



}	 
