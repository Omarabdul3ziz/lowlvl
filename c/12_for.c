#include <stdio.h>
#include <unistd.h> // unix std lib

int main () {
	// for (init; test; update) {}
	for (int i=0; i<=10; ++i) 
	{ printf("%d\n", i); 
	sleep(1);}

return 0; }	
