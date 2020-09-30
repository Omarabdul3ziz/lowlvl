#include <iostream>
using namespace std;

int main () {


// declare
int *ptr;

// allocate 
ptr = new int;

// assign 
*ptr = 22;

// use 
cout << "Omar have " << *ptr << " years\n";

// delete
delete ptr;





return 0;}
