#include <stdio.h>

int main () {

	int a, b, tmp;

	printf("Enter the frist number then the second: \n");
	scanf("%d %d", &a, &b);
	printf("You think they are %d and %d\n", a, b);

	/* swap with tmp
	tmp=a;
	a=b;
	b=tmp;*/

	a=a-b;
	b=a+b;
	a=b-a;

	printf("but they are %d and %d\n", a, b);

return 0;}
