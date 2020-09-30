#include <iostream>
using namespace std;

int main () {

	cout << "Enter array elements : ";
	int marks[5];
int sum = 0;

	for (int &i : marks) cin >> marks[i];

	for (int i : marks) sum += i;

	cout << sum << endl;





return 0;}
