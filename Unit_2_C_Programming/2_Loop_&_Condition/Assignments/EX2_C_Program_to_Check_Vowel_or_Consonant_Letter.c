/*
 * EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include <stdio.h>

void main() {
	
	char u_char ;
	
	printf("please enter the character : ") ;
	fflush(stdout);
	scanf("%c",&u_char);
	
	switch(u_char)
	{
		case 'a' :
		case 'A' :
		printf(" the character is Vowel ");
		break ;
		
		case 'e' :
		case 'E' :
		printf(" the character is Vowel ");
		break ;
		
		case 'o' :
		case 'O' :
		printf(" the character is Vowel ");
		break ;
		
		case 'u' :
		case 'U' :
		printf(" the character is Vowel ");
		break ;
		
		case 'i' :
		case 'I' :
		printf(" the character is Vowel ");
		break ;
		
		default :
		printf(" the character is Consonant ");
		break ;
		
	}
	
	
	
}