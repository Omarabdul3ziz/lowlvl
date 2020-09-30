#include <iostream>
using namespace std;

int main () {


	int n;
	int sum=0;

	while (true) {
		cout << endl << "Add: ";
		cin >> n;
		if (n<0) break;
		sum += n;
		}
	cout << sum << endl;	



return 0;}
