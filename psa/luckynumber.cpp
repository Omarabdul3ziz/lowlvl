#include <iostream>
#include <string>
using namespace std;

int main () {

string n;
cin >> n;

string result="YES";

for(char c: n) {
	if (c!='4'&& c!='7') {
		result="NO";
		break;}}
cout << result;


return 0;}
