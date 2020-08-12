#include<stdio.h>
#include<stdlib.h>

//I must have a function prototype because of Line by line execution or it will error
int cubed(int a);

int main()
{
	printf("Output: %d\n",cubed(54));
	return 0;
}

int cubed(int a)
{
	int result= a*a*a;
	return result;
}
