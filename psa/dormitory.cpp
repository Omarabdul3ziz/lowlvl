#include <iostream>
using namespace std;

int main () {

int n, s=0;
int p[100], q[100];

cin >> n;
for (int i=0; i< n; ++i){
	cin >> p[i] >> q[i];
	}

for (int i=0; i<n; ++i){
	if (q[i]-p[i] >= 2) ++s;}



cout <<s;


return 0;}
