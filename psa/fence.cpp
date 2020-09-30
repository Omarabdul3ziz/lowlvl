#include <iostream>
using namespace std;

int main () {

int n, f;
cin >> n >> f;

int b=n;
int ts[1001];

for (int i=0; i<n; ++i) 
	cin >> ts[i];

for (int i=0; i<n; ++i) {
	if (ts[i]>f) {
		++b;}}

cout << b;



return 0;}
