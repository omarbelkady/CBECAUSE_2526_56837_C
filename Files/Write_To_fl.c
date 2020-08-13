#include<stdlib.h>
#include<stdio.h>

int main()
{
	//Must Create a File Pointer to access the file and write to it
	//3 Modes: R: READ, W: WRITE, A: APPEND
	FILE * filePointer = fopen("name.txt","w");

	//HOW TO WRITE TO FILES "fprintf" similar to printf
	fprintf(filePointer,"Nelan: lovesC\nAngela: likesToRead\nNouhaila: likesDogs(I Do Too)\nNelan: lovesTSwift");

	fclose(filePointer);
	return 0;
}
