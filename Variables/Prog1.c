#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char name[] = "Nelan's fav Prog Lang is: ";
	char favProgLan[] = "C ON TOP OF Machine Language Because He Loves Neha";
	strcat(name,favProgLan);
	printf("When I concatenated the string %s\n",name);
	return 0;
}
