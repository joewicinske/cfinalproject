#include <stdio.h>
#include <string.h> // strcmp needs this 
#define MAX 500
void printStr(char* ); 

int main()  {
	FILE* filePointer; 
	char* fileName = "HashInputDOS.txt"; 
	errno_t err; 
	char str[MAX]; 
	int strH[MAX];
	err =  fopen_s(&filePointer, fileName,"r"); // file open with read mode 
	if (err != 0) {
		printStr("File could not be opened"); 
		return 1; 
	}
	int i = 0; 
	while (fgets(str, MAX, filePointer) != NULL) {
		//printStr(str); 
		fscanf_s(filePointer, "%2d", strH[i]); // reads string into the array
		i++; 
	}

	for (int x = 0; x < 3; x++)
		printStr(strH[x]); 

	
	return 0; 
}


void printStr(char *str) {
	//if (strcmp(str, "\n") != 0)  is string a blank line 
		printf("%s\n", str);
}