#include<stdio.h>
#include<stdlib.h>

void funcWithParams(char name[], char favSinger[]);

int main()
{
	funcWithParams("C And Assembly","Taylor Swift");
	return 0;
}

void funcWithParams(char name[], char favSinger[])
{
	printf("2526 Loves %s but %s even more\n",name, favSinger);
}

