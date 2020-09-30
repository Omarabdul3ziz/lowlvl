#include <iostream>
using namespace std;

int main () {
	int n,m;
	char opr;

	cout << "Enter equation int opr int : ";
	cin >> n >> opr >> m;

	switch (opr) {
		case '+' : cout << n+m;
		case '-' : cout << n-m;
		case '*' : cout << n*m;
		case '/' : cout << n/m;
	}

	cout << "The equation not in shape.";



return 0;}
