#include <stdio.h>

int main () {
	int i;
	char s[100];
   	printf("Enter a string to: ");
   	fgets(s,100);

	for (i=1; s[i] != '\0'; ++i);
	printf("%d character.", i);

return 0;}
