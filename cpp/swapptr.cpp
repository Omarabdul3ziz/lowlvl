#include <iostream>
using namespace std;

int main () {

	int n,m, *ptrn, *ptrm;
	n=5; ptrn = &n;
	m=15; ptrm = &m;

	cout << " n, m : " << n << m << endl;

	n = *ptrm;
	m = *ptrn;

	cout << " n, m : " << n << m << endl;





return 0;}
