#include <stdio.h>
#include <unistd.h>

int main () {

	int n,c;
	int result=1;
	printf("Enter your number: ");
	scanf("%d", &n);

	for (c=n; c>1; --c) {
	result*=c;
	printf("%d\n", result);
	sleep(1);}

return 0;}
