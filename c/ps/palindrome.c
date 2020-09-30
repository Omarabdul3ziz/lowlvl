#include <stdio.h>

int main () {

	int n;
	printf("Enter an intger: ");
	scanf("%d",&n);
	int s=n;

	// reverse the intger
	int r=0;
	while (n != 0){
		// to covert from 1s to 10s
    		r = r * 10;
		// to add the next digit
		r = r + n%10;
		// to convert from 10s to 1s
    		n = n/10;
  	}	
	
	if (s==r) {printf("Yes");}
	else {printf("NO");}
return 0;}
