#include <iostream>
#include <string>
using namespace std;

int main () {

	string username, newname;
	cin >> username;

	newname += username[1];
	for(int i=0;i< username.length(); ++i) {
		for(int j=0; j< newname.length(); ++j) {
			if (newname.find(username[i]) == -1) newname+=username[i];}}

	if (newname.length() %2 == 0) cout <<"CHAT WITH HER!";
	else cout << "IGNORE HIM!";





	return 0;}
