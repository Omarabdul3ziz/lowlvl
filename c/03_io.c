#include <stdio.h>

int main () {

	/* from the included lib above we can use the most powerful
	functions in C. printf() for output 
	scanf() for input. */

	/* printf is defined to take argument i ""
	for any values in variable, you should print the format specifier
	then pass the variable name as second argu. */

	printf("Hello, World\n");

	float age=22.0;
	printf("I am Omar, and my age is %f\n", age);

	/* to take input you should:
	1. intialize a variable.
	2. scan the keyboard for values to store int the variable.*/

	int id;
	printf("Enter your id number: ");
	scanf("%i", &id);
	printf("WAIT! your id is %i.\n", id);

	// it is also possible to take multipale i/o

	int year;
	char month;
	printf("Enter the year, then the first char of the current month.\n");
	// look at the space betwen format specifires
	// and the & before the variable name
	scanf("%d %c", &year, &month);
	printf("Its %c of %d.\n", month, year);

return 0;}
