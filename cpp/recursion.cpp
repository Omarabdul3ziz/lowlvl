#include <iostream>
using namespace std;

int act(int n) {
	if (n>0) return n *= act(n-1);
	else return 1;}
 
int main () {

	int n;

	cout << "Enter number: ";
	cin >> n;
	cout << act(n);



return 0;}
