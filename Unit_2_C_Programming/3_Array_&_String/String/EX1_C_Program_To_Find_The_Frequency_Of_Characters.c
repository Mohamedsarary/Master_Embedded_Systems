/*
 * EX1_C_Program_To_Find_The_Frequency_Of_Characters.c
 * 
 *      Created on: 15/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include<stdio.h>
 
void main ()
{
	char str[1000];
	char freq_char ;
	int i  ;
	int count = 0 ;
	
	
	printf("Enter a String : ");
	fflush(stdout); fflush(stdin);
	gets(str);
	
	printf("Enter a Character to find frequency : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&freq_char);
	
	for (i=0 ; str[i]!= '\0' ; i++)
	{
		if (str[i]==freq_char)
		{
			count ++ ;
		}
		
	}
	
	printf("the frequency of %c is : %d" ,freq_char,count ) ;
	
	
	
	
	
}