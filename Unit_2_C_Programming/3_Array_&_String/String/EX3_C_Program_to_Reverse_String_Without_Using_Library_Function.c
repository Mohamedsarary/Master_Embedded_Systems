/*
 * EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 * 
 *      Created on: 16/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include <stdio.h>
#include <string.h>

void main ()
{
	char str[1000];
	int lenght ;
	char temp ;
	int i , j ; 
	
	
	printf("Enter a String : ");
	fflush(stdout); fflush(stdin);
	gets(str);
	
	lenght = strlen(str);

	i = 0 ;
	j = lenght - 1 ; 
	
	while (i<j)
	{
		
	temp = str[i];
	str[i] = str[j];
	str[j] = temp ;
	i++ ;
	j--;
		
	}
	
	printf("the reversed is : %s " , str );
	
	
	
	
	
	
	
	
	
	
	
}