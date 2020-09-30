#include <stdio.h>

int main () { 

	// declare pointer of file type	
	FILE fp;

	// init the pointer with the file
	// fopen(filepath, mode)
	fp = fopen("hello.txt","w");

	// fprintf(the pointer, the value printed)
	fprintf(fp,"3");

	// you should close the door
	fclose(fp);

	return 0;}
