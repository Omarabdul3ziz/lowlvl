#include "stack.h"
#include <iostream>
using namespace std;

void print(Entry e){
	cout << e;}

int main () {

char e;
stack name;

for (int i=0; i<MAX; i++){
	cin >> e;
	push(e, &name);}

traverse(&name, &print);

return 0;}
