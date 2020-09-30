#include <stdio.h>

int main () {

	/* we now know C is strongly typed language.
	This means that the variable type must be declared */

	/* each type has size & format specifier */
	
	// if you use the %d for char; you will get the ascii 
	int id = 1; printf("%i\n",id); // 4 bytes
	float age = 22.5; printf("%f\n",age); // 4 bytes
	char name = 'o'; printf("%c\n", name); // 1 byte

	// void it means nothing;
	// of course there is bool
	/* you also have some other larger
	short, long, double
	and unsigned, signed */

	/* there is some other derived types 
	arrays, pointers, structure, ... */

return 0;}

