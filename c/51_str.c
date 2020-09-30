#include <stdio.h>

int main () {

	// assign at init	
	char sname[10] = "Abdulaziz";

	// assign from user
	char fname[10];
	printf("Enter your first name: ");
	scanf("%s",fname);

	printf("hello, %s %s", fname, sname);
return 0;}
