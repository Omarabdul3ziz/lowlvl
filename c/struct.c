#include <stdio.h>

	// create the structure
struct Person {
	char name[22];
	int age;};


int main () {

	// create variable from struct
	struct Person Omar;

	// accessing members
	Omar.name = "Omar";
	Omar.age = 22;
return 0;}
