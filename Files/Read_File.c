#include<stdio.h>
#include<stdlib.h>

int main()
{
	char lineByLine[255];
	FILE * filePointer = fopen("name.txt","r");

	//HOW TO READ A FILE LINE BY LINE
	//fgets(placeToStoreInfo, SIZEOFARRAYSHOULDMATCHHERE, filePointerName)
	fgets(lineByLine, 255, filePointer);
	printf("%s",lineByLine);

	//READ LINE 2
	fgets(lineByLine,255, filePointer);
	printf("%s",lineByLine);

	fclose(filePointer);
	return 0;
}
