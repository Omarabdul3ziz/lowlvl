#include <stdio.h>

int main () {
	// break; end the loop.
	int num, sum=0;
	printf("Enter number: ");
	scanf("%d", &num);

	for (int i=0;i<=num;++i){
		if(num==0){break;}	
		sum+=i;}
	printf("%d",sum);

return 0;}
	
