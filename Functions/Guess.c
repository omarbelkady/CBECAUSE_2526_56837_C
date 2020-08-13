#include<stdio.h>
#include<stdlib.h>

int main(){
	int secr_Num=16;
	int guess;

	while(guess != secr_Num)
	{
		printf("Enter a number: ");
		scanf("%d",&guess);
	
		if(guess<secr_Num)
		{
			printf("Too Low!\n");
		}
		else if(guess >secr_Num){
			printf("Too High\n");
		}
	}
	printf("You Win!\n");

	return 0;
}
