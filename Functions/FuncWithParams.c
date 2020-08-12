#include<stdio.h>
#include<stdlib.h>

void funcWithParams(char name[], char favSinger[]);

int biggerNum(int firstNum, int secondNum)
{
	int output;
	if(firstNum > secondNum)
	{
		printf("The first Number: %d is bigger than %d\n",firstNum,secondNum);
		output = firstNum;
		return output;
	}

	else
	{
		printf("The second Number: %d is bigger than %d \n",secondNum,firstNum);
		output=secondNum;
		return output;
	}
}

int main()
{
	funcWithParams("C And Assembly","Taylor Swift");
	printf("%d",biggerNum(30,65));
	printf("\n");
	return 0;
}

void funcWithParams(char name[], char favSinger[])
{
	printf("2526 Loves %s but %s even more\n",name, favSinger);
}

