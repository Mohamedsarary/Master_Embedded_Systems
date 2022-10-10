/*
 * EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
 * 
 *      Created on: 10/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include <stdio.h>
 
void main () 
{
	char oper ; 
	float f_num , s_num ;
	float res = 0 ;
	
	printf(" Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&oper);
	
	printf("enter the first operand : ");
	fflush(stdout);
	scanf("%f",&f_num);
	
	printf("enter the Second operand : ");
	fflush(stdout);
	scanf("%f",&s_num);
	
	switch (oper)
	{
		case '+' :
			res = f_num + s_num ; 
			printf("the result = %.3f",res);
		break ; 
		
		case '-' :
			res = f_num - s_num ; 
			printf("the result = %.3f",res);
		break ; 
		
		case '*' :
			res = f_num * s_num ; 
			printf("the result = %.3f",res);
		break ; 
		
		case '/' :
			res = f_num / s_num ; 
			printf("the result = %.3f",res);
		break ; 
		
		default  :
			printf(" Error !!! please try again ");
		break ; 
	}
	
	
 }