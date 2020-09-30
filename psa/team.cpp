#include <iostream>
using namespace std;

int main () {

	// the number of problems
	int n;
	cin >> n;

	// members view
	int p,v,t, sum;
	int s=0;

	for (int i=0; i<n; ++i){
		cin >> p >> v >> t;
		sum = p + v + t;
		// check
		if (sum >=2) s++;
	}
cout << s;


	return 0;}
