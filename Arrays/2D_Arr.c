#include<stdio.h>
#include<stdlib.h>

int main(){
	char* nums[3][2]={
			{"63526_56837: ", "27736259,"},
			{"728567 ", "79438,"},
			{"263","2"}
			};
	//How to access
	printf("He Loves %s SO Much!",nums[0][1]);
	printf(" BUT %s%s is who he listens to everyday",nums[1][0],nums[1][1]);
	int col, row,i,j;
	//How to iterate through a 2D Array using a nested for loop
	for(i=0;i<nums[row];i++)
	{
		for(j=0;j<nums[col][row];j++)
		{
			printf("%s",nums[row][col]);
		}
		printf(" ");
	}

	return 0;
}
