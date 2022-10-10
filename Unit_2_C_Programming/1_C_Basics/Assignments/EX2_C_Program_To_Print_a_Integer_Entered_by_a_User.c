/*
 * EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 *
 *  Created on: 09/10/2022
 *      Author: Mohamed Sarary
 */

#include<stdio.h>
#include<stdlib.h>

void main(){
	int num ;

	printf("Please enter an integer : ");

	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	printf("you entered : %d",num);


}

