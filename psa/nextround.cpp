#include <iostream>
using namespace std;

int main () {

// take input
int n,k;
cin >> n >> k;

int scr[100];

for (int i=0; i< n; ++i){
	cin >> scr[i];}

// winners
int win = k;

// check for other
for (int i=k; i<n; ++i) {
if (scr[i-1] == scr[i]) ++win;
}

//
cout << win;



return 0;}
