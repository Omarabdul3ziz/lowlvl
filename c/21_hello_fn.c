#include <stdio.h>

	// first comes the prototype.
int plus (int n, int m);

int main () {
	
	int m,n;

	printf("Enter two intgers: ");
	scanf("%d %d", &n, &m);

	// then you call it with passed values
	printf("Sum = %d", plus(n,m));

	return 0; }

	// Now defination.
int plus (int n, int m ) {
	return (n+m);}
