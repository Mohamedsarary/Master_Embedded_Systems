/*
 * EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 * 
 *      Created on: 09/10/2022
 *      
 *      Author: Mohamed Sarary
 */
 
 #include <stdio.h>
 
void main () {
	
	int x , y ;
	
	printf("enter the first number : ");
	scanf("%d",&x);
	
	printf("enter the Second number : ");
	scanf("%d",&y);
	
	
	printf("the first number before swap is : %d \n",x);
	printf("the second number before swap is : %d \n",y);
	
	x = y - x ; 
	y = y - x ; 
	x = y + x ; 
	
	printf("the first number After swap is : %d \n",x);
	printf("the second number After swap is : %d ",y);
	
	
}