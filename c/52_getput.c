#include <stdio.h>

int main () {
	char name[30];
	printf("Enter your full name: ");
	fgets(name, sizeof(name), stdin);
	puts(name);

	return 0;}
