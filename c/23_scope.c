#include <stdio.h>

int c = 7; // global variable
void print();

int main () {
	
	int n = 4; // local variable inside main function only.
	
	print();
	print(); // the value of m remains.

	return 0; }

void print() {

	// printf(n); cause error because it is not in the scope
	printf("%d ", c); // it works

	static int m = 1;
	m+=3;
	printf("%d ", m);
}
