#include <iostream>
using namespace std;

int main () {

int n;
cin >> n;

int pass[1000][2];
for (int i=0; i<n; ++i) {
	for (int j=0; j<2; ++j) {
		cin >> pass[i][j];
		}
	}

int cap=0;
int max=0;

for (int i=0; i<n; ++i) {
	cap = cap - pass[i][0] + pass[i][1];
	if (cap>max) {
		max=cap;
		}
	}

cout << max;





return 0;}
