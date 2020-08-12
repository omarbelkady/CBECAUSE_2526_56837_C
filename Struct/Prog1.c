#include<stdio.h>
#include<stdlib.h>
//To be able to have the bool datatype
#include<stdbool.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	bool likesClikeAlan;
	bool enjoysToWriteLowLevel;
};

int main(){
	//Create a Student structure
	struct Student Nelan;
	Nelan.age= 2526;
	strcpy(Nelan.name, "Nelan");
	strcpy(Nelan.major, "CS W/T A C Specialization and Machine Language!");
	Nelan.enjoysToWriteLowLevel = true;
	printf("The individual %s is %d years old and believes that it is true that low level is awesome and he majors in %s",Nelan.name,Nelan.age, Nelan.major);


	return 0;
}
