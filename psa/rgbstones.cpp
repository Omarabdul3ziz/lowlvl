#include <iostream>
#include <string>
using namespace std;

int pop(string colors) {
	int repeat=0;
	for (int i=0; i<colors.length(); ++i){
		if (colors[i] == colors[i+1]) ++repeat;}
	return repeat;}

int main () {

int n;
cin >> n;

string colors;
cin >> colors;

cout << pop(colors);





return 0;}
