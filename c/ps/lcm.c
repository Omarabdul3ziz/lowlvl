#include <stdio.h>

int main() {

	int n,m;
	int lcm=0;

	printf("Enter two intgers: ");
	scanf("%d %d", &n, &m);

	// by Listing Multiples
	int n_multi[10];
	int m_multi[10];

	for(int i=1;i<11;++i) {n_multi[i-1]=n*i;}
	for(int i=0;i<10;++i) {m_multi[i]=m*(i-1);}

	for(int i=0;i<10;++i) {
		for(int j=0;j<10;++j) {
			if (n_multi[i]==m_multi[j]) {
				lcm=n_multi[i];}
			if (lcm>0){break;}}
		if (lcm>0){break;}}
	if (lcm>0){printf("LCM of %d and %d is %d.\n",n,m,lcm);}
	else {printf("It's too far to found.\n");}

	// in less way
	int max;
	max = (n > m) ? n : m;

	while (1) {
        	if (max % n == 0 && max % m == 0) {
            	printf("The LCM of %d and %d is %d.", n, m, max);
            	break;
        	}
        	++max;
    	}
return 0;}
