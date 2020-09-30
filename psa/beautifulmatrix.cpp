#include <iostream>
using namespace std;

int go(int n) {
	if (n>2) return n-2;
	else if (n<2) return 2-n;
	else return 0;}

int main () {

	int mat[5][5];
	int n,m;
	int b;

	for (int i=0; i<5;++i) {
		for (int j=0; j<5;++j) {
			cin >> b;
			mat[i][j] = b;

			if (b!=0) {

				n=i;
				m=j;}}}

	
	cout << go(n)+go(m);





	return 0;}
