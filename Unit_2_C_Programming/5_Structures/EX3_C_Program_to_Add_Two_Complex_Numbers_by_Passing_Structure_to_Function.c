/*
============================================================================
 Name        : EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 Author      : Mohamed Sarary
 Created on  : Nov 06, 2022
 Description : C Program to Add Two Complex Numbers by Passing Structure to a Function
 ============================================================================
 */
 
#include<stdio.h> 

struct Snumber {
	
	float num_R ;
	float num_C ;
	
	
};

struct Snumber Read_Complex () ;
struct Snumber Add_Complex (struct Snumber Comp1 , struct Snumber Comp2);
struct Snumber Print_Complex (struct Snumber Res);


void main () 
{
	struct Snumber f_num , s_num , res ; 
	
	printf("for 1st Complex number : \n");
	f_num = Read_Complex();
	
	printf("for 2nd Complex number : \n");
	s_num = Read_Complex();
	
	res = Add_Complex(f_num,s_num);
	
	Print_Complex(res);
	
	
	
}

struct Snumber Read_Complex () 
{
	struct Snumber num_read ;
	printf("please enter real and imaginary respectievly : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &num_read.num_R );
	scanf("%f", &num_read.num_C) ;
	return num_read ;
	
}


struct Snumber Add_Complex (struct Snumber Comp1 , struct Snumber Comp2)
{
	struct Snumber Add_res ;
	
	Add_res.num_R = Comp1.num_R + Comp2.num_R ;
	Add_res.num_C = Comp1.num_C + Comp2.num_C ;
	
	return Add_res ;
	
}


struct Snumber Print_Complex (struct Snumber Res)
{

		
	printf("sum = %0.2f + %0.2fi " , Res.num_R , Res.num_C	);
	

}