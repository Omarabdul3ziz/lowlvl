#include <iostream>
using namespace std;

int main () {

int n, m;
cin >> n >> m;

int am[100][100];
bool flag= false;
char foo;

for (int i=0; i<n; ++i) {
	for (int j=0; j<m; ++j) {
		cin >> foo;
		am[i][j] = foo;
		if(foo=='C'|| foo=='Y'|| foo=='G'|| foo=='M') flag = true;
		}}


if (flag) cout << "#Color";
else cout << "#Black&White";




return 0;}
