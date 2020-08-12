#include<stdio.h>
#include<stdlib.h>

int main()
{
	char my_Letter_Grade='A';

	switch(my_Letter_Grade){
		case 'A':
			printf("Smart Student e.g. Nelan");
			break;

		case 'B':
			printf("Not Good");
			break;

		case 'C':
			printf("Crying is the best you can do");
			break;

		case 'D':
			printf("You're not putting enough hard work");
			break;

		case 'F':
			printf("Dumb");
			break;

		default:
			printf("Incorrect Grade");
			break;
	}

	return 0;
}
