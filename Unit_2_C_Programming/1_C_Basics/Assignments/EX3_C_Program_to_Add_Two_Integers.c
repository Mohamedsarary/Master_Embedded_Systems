/*
 * EX1_C_Program_To_Print_Sentence.c
 *
 *  Created on: 09/10/2022
 *      Author: Mohamed Sarary
 */


#include<stdio.h> 
#include<stdlib.h>

int main (){
	
	int num1 , num2 ; 
	int sum = 0 ;
	
	printf("Please enter the first number : ");
	scanf("%d",&num1);
	
	
	printf("Please enter the Second number : ");
	scanf("%d",&num2);
	
	sum = num1 + num2 ;
	printf("the sum is : %d ",sum);
	
	return 0 ;
	
}