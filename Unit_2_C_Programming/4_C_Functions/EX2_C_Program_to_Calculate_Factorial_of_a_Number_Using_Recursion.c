/*
 * EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 * 
 *      Created on: 29/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
#include <stdio.h>

/* Declaring Functions(Functions Prototypes) */
int getfact( int num );

/* Main Function */
int main()
{
	
	int user_num , result ;
	
	/* getting the number from the user */
	printf("please enter the number : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&user_num);
	
	/* Calling the function to get Factorial of the number */
	result = getfact(user_num);
	
	
	/* Printing the Factorial of the number */
	printf("Factorial of %d is : %d",user_num , result);
	
}

/* Function definiton */
int getfact( int num )
{
  if ( num == 1 )
  {
	  return 1 ;    /* Factorial of 1 is 1 */
  }
  else 
  {
	  return num * getfact(num-1) ; 
	  
  }
  
}