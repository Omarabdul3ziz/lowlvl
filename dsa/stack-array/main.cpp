#include "stack.h"
#include <iostream>
using namespace std;

int main(){

stack numbers;
init(&numbers);

push(1, &numbers);
push(2, &numbers);

cout << size(&numbers);


return 0;}
