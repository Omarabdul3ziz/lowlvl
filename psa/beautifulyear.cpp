#include <iostream>
using namespace std;

bool diff(string year){
	bool result = true;
	for (int i=3; i>0; --i) {
		for (int j=2; j>=0; --j) {
			if (year[i] == year[j]) {
				result = false;}}}
	return result;}

int main () {

string year;
cin >> year;

int i=0;

while (true) {
	if (diff(year+i)) {cout << year+i; break;}
	++i;}







return 0;}
