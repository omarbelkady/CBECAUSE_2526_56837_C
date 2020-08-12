#include<stdio.h>
#include<stdlib.h>

int main()
{
	//How to create an array
	//DT[size] = ;
	int meaningFulNums[]={2526, 56837, 2,263, 27736259};
	//Very similar to C++
	printf("%d \n",meaningFulNums[4]);

	//P2 of how to create an Array(recommended way)
	int myArray[5];

	//-2 return code means the array position hasn't been given a value yet
	//We must specify size at first in order for c to allocate enough memory
	//for the elements we are going to store within the array
	
	//Remember a string is an array of characters
	char phrase[22]="2526 Loves 6342 AND 2!";
	
	for(int i=0;i<sizeof(phrase);i++)
	{
		printf("%c",phrase[i]);
	}

	return 0;
}
