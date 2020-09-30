#include <stdio.h>

int main () {

	int n, sum =0;

	 for (int c=0;c<3;++c){
		printf("Add: ");
		scanf("%d", &n);
		if (n<0) { continue;}
		sum += n;}
	printf("%d\n", sum);

return 0;}
