#include<stdio.h>
#include<stdlib.h>

int main()
{
	//A pointer is a type of data in C that is a memory address

	int fav_Number_for_2526=6342;

	printf("The address in memory of fav_Number is: %p",&fav_Number_for_2526);

	printf("\n\t\tExample2: \n");
	//I can create a pointer within a pointer variable similar to a double,int, char
	//But I have to store the memory address of a variable that is already defined within my program
	int *alan_fav_Subj = &fav_Number_for_2526;

	double funnyNumber = 63526.263829568;
	double *ptr_funnyNumber = &funnyNumber;
	printf("Address: %p",&ptr_funnyNumber);
	printf("\n");
	printf("Address: %p",&alan_fav_Subj);


	//<==============HOW TO DEREFERENCE A POINTER====================>
	printf("\n\n\nHOW TO DEREFENCE: \n");
	printf("I will now dereference *ptr_funnyNumber var: %f",*ptr_funnyNumber);
	return 0;

	printf("<=========HOW TO DEREFRENCE IN C EX2=======>\n");
	int aVar = 25;
	int *ptrOfaVar= &aVar;

	printf("The dereference of ptrOfaVar: %d",*&aVar);

	//More Crazier
	/*	int *ptrOfaVar=&aVar
	 *	printf("The (reference)derefence of ptrOfaVar: %d", &*&aVar);
	 *	To Dereference one more time
	 *	printf("The dereference of reference of the dereference of the ptr: %d",*&*&aVar);
	*/
}
