#include <stdio.h>

int main () {

	// find avarage.
	int n, sum;
	int mark[n];

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (int i=0; i<=n; ++i) {
		printf("Enter your grade\n: ");
		scanf("%d", &mark[i]);

		sum += mark[i];}

	printf("Avarag is %d\n",sum/n);
	
	return 0;}
