#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	char favLang='C';
	double identif_num=252656837.82956779;
	int randNum = 25;//randNum as well as the other vars are stored in our RAM
	//RAM is used to store and track all these bits of info
	
	//HOW TO PRINT THE MEMORY ADDRESS OF THE VAR %p stands for pointer
	printf("This is the memory address of the variable favLang:%p",&favLang);
	return 0;
}
