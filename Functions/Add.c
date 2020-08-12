#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*Changing the data type to allow user to input doubles instead of ints
	int firstNum;
	int secondNum;
	*/
	double firstNum;
	double secondNum;
	//floats = f doubles= lf
	printf("Enter the first Number: ");
	scanf("%lf", &firstNum);
	printf("Enter the second Number: ");
	scanf("%lf", &secondNum);

	printf("The output to the operation: %f \n", firstNum+secondNum);
	
	return 0;
}
