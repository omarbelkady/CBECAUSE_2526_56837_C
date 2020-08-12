#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	printf("Enter your age: ");
	//Telling C what data type I want from the user and I have to put an ampersand
	scanf("%d",&age);
	//&age is what's called a pointer aka an address in memory
	printf("You are a %d lover",age);
	return 0;
}

