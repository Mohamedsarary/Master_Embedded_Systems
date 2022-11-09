/*
 * EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
 * 
 *      Created on: 29/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
# include <stdio.h>
# include <string.h>


/* /* Declaring Functions(Functions Prototypes) */

int power(int number, int toPower) ;

/* Main Function */
int main ()
{
	int number, toPower ;					

	printf ("Enter base number: ");			
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &number);

	printf ("Enter power number(Positive integer: ");			
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &toPower);

	printf ("%d^%d = %d", number, toPower, power(number, toPower));	
	return 0;
} 


/* Function definiton */

int power(int number, int toPower)
{
	if (toPower == 0)
		return 1;				/* case power of zero */
	else if (toPower == 1)
		return number;			/* case of power one */
	else
		return (number * power(number, toPower-1));		/* power calculation */
}		
