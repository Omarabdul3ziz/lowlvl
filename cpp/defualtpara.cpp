#include <iostream>
using namespace std;

void display (int n=3, char c='.') { 
	for (int i=0; i<n; ++i)
		cout << c; 
	cout << endl;}

int main () {

display(5,'*');
display(6);
display();





return 0;}
