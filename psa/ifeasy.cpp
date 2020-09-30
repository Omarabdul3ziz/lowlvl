#include <iostream>
#include <string>
using namespace std;

int main () {

int n;
int p[100];
string flag = "Easy";

cin >> n;
for (int i=0; i<n ; ++i) {
	cin>> p[i];
	if (p[i]==1) flag = "Hard";
	}



cout << flag;




return 0;}
