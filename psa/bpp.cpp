#include <iostream>
#include <string>

using namespace std;

int main () {

string str;
int x= 0;
int n;
cin >> n;

for (int i=0; i<= n; ++i) {

	getline(cin, str);
	if (str.find("-")  != string::npos) {--x;}
	else if (str.find("+") != string::npos) {++x;}
	else continue;}

cout << x;



return 0;}
