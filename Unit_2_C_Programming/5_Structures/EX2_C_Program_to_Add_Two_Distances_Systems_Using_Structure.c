/*
============================================================================
 Name        : EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 Author      : Mohamed Sarary
 Created on  : Nov 06, 2022
 Description : C Program to Add Two Distances Systems Using Structure
 ============================================================================
 */
 
#include<stdio.h>

struct Sdistance 
{
	int dis_feet ;
	float dis_inch ;	
	
};

struct Sdistance Read_distance ();
struct Sdistance Add_distance (struct Sdistance f_distance , struct Sdistance S_distance);
struct Sdistance Print_distance (struct Sdistance Res_distance);



void main (){
	
	struct Sdistance Sfir_distance , Ssec_distance , Sres ;
	
	printf ("Enter the 1st distance below in feet and inches: \n" );
	Sfir_distance = Read_distance();
	
	printf ("\nEnter the 2nd distance below in feet and inches: \n" );
	Ssec_distance = Read_distance();
	
	Sres = Add_distance(Sfir_distance,Ssec_distance);
	
	Print_distance(Sres);
	
	
}

struct Sdistance Read_distance ()
{
	struct Sdistance distance ; 
	printf ("Enter the 1st distance below in feet : " );
	fflush(stdout); fflush(stdin);
	scanf("%d",&distance.dis_feet);

	
	printf ("Enter the 1st distance below in inch : " );
	fflush(stdout); fflush(stdin);
	scanf("%f",&distance.dis_inch);
	
	return distance ;
	
}

struct Sdistance Add_distance (struct Sdistance f_distance , struct Sdistance S_distance)
{
	struct Sdistance Result ;
	
	Result.dis_feet=f_distance.dis_feet + S_distance.dis_feet ;
	Result.dis_inch=f_distance.dis_inch + S_distance.dis_inch ;
	
	while (Result.dis_inch >=12 )
	{	
		Result.dis_inch -= 12 ;
		Result.dis_feet++ ;
		
	}
	
	
	return Result ;
	
	
	
}


struct Sdistance Print_distance (struct Sdistance Res_distance)
{

	
	printf ("\nThe SUM of the distances is: %d',-%.1f\".", Res_distance.dis_feet, Res_distance.dis_inch);
	
}
