#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Must tell C how many chars I want to store for it to alloc memory
	char IndivName[16];
	//Nelan Loves 6342;
	printf("Enter your name:  ");
	scanf("%s", IndivName);
	printf("\nYour name is %s ",IndivName);
	char NelanFavProgLang[8];
	
	//fgets getline(varName, limitNumberOfChars,stdin) which means standard input
	fgets(NelanFavProgLang,16,stdin);
	printf("Your fav Programming Languages are: %s \n",NelanFavProgLang);	
	return 0;
}

