#include <stdio.h>

int main () {

int a, b;
char operator;

	printf("Enter equation in this form (int operator int): ");
	scanf("%d %c %d", &a, &operator, &b);

	switch(operator) {
		case '+': printf("%d\n", a+b); break;
		case '-': printf("%d\n", a-b); break;
		case '*': printf("%d\n", a*b); break;
		case '/': printf("%d\n", a/b); break;
		case '%': printf("%d\n", a%b); break;
} return 0;}
