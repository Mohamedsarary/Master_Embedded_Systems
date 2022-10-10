/*
 * EX6_C_Program_to_Swap_Two_Numbers.c
 * 
 *      Created on: 09/10/2022
 *      
 *      Author: Mohamed Sarary
 */

#include <stdio.h>

void main() {
	
	float f_num , s_num ;
	float temp = 0  ; 
	
	printf("please enter the first number  : ");	
	fflush(stdout);
	scanf("%f",&f_num); 

	printf("please enter the Second number  : ");	
	fflush(stdout);
	scanf("%f",&s_num); 
	
	temp = f_num ; 
	f_num = s_num ;
	s_num = temp ;
	
	printf("****After Swapping****\n");
	printf("The first number is : %f \n" ,f_num);
	printf("The Second number is : %f " ,s_num);
	
	
	
}