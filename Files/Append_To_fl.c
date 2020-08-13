#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * filePointer = fopen("name.txt", "a");
	fprintf(filePointer, "\nSara: Petroleum Engineering");
	fclose(filePointer);
	return 0;
}
