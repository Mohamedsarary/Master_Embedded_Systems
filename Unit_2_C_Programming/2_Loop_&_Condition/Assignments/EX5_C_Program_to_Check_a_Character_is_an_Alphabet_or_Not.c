/*
 * EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include <stdio.h>
 
void main () 
{
	char u_input ; 
	printf("please enter the input : ");
	fflush(stdout);
	scanf("%c",&u_input);
	
	if( (u_input >= 'a' && u_input <= 'z') || (u_input >= 'A' && u_input <= 'Z' ) )
	{
		 printf("%c is an Alphabet",u_input);
	}
	else printf("%c is not an Alphabet",u_input);
	  
 }