#include <iostream>
using namespace std;

int main () {

int x, n=0;
cin >> x;
while(x!=0){

	if (x>=5) { x -=5; ++n;} 
	else if (x>=4) { x -=4; ++n;} 
	else if (x>=3) { x -=3; ++n;} 
	else if (x>=2) { x -=2; ++n;} 
	else { x -=1; ++n;} 
}

cout << n;



return 0;}
