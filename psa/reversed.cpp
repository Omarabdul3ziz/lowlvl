#include <iostream>
#include <string>
using namespace std;

string reverse(string word){
	string drow;
	for (int i=word.length()-1; i>=0; --i){
		drow += word[i];}
	return drow;}

int main () {

string word, drow;
cin >> word >> drow;

if (drow==reverse(word)) cout << "YES";
else cout << "NO";





return 0;}
