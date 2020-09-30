#include <iostream>
using namespace std;

int main () {

int a, b, i=0;

cin >> a >> b;

while(true) {
	if (a>b) break;
	else {
		a*=3;
		b*=2;
		++i;
		}
}	
cout << i;



return 0;}
