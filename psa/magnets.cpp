#include <iostream>
using namespace std;

int main () {

int n, m[100001], g=0;

cin >> n;

for (int i=0; i<n; ++i){
	cin >> m[i];}

for (int i=0; i<n; ++i) {
	if (m[i] != m[i+1]) {
		++g;}}

cout << g;




return 0;}
