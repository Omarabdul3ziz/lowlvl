#include <stdio.h>

int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	// if
	if (n>0) { printf("its positive\n");}
	printf("if is awsome\n\n");

	// if else
	if (n%2==0) { printf("%d is even.\n\n",n);}
	else { printf("%d is odd.\n\n",n);}
	
	int m;
	printf("Enter another number: ");
	scanf("%d", &m);
	// if else ladder
	if (n>m) { printf("%d bigger than %d ", n,m);}
	else if (m>n) {printf(" %d bigger then %d", m,n);}
	else {printf("%d = %d",n,m);}	

return 0;}
