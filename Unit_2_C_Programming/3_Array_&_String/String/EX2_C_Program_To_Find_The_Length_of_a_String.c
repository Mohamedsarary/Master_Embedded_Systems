/*
 * EX2_C_Program_To_Find_The_Length_of_a_String.c
 * 
 *      Created on: 16/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include<stdio.h>
 
void main ()
{
	char str[1000];
	int i  ;
	int count = 0 ;
	
	
	printf("Enter a String : ");
	fflush(stdout); fflush(stdin);
	gets(str);
	
	
	for (i=0 ; str[i]!= '\0' ; i++)
	{
		if (str[i] != '\0')
		{
			count ++ ;
		}
		
	}
	
	printf("Lenght of the String is  : %d" ,count ) ;
	
	
	
	
	
}