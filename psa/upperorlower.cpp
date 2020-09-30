#include <iostream>
#include <string>
using namespace std;

string toup(string word) {
	int i=0;
	while (word[i]!='\0') {
		word[i] = toupper(word[i]);
		++i;}
		return word;}

string tolow(string word) {
	int i=0;
	while (word[i]!='\0') {
		word[i] = tolower(word[i]);
		++i;}
		return word;}

		
int main () {

string word;
cin >> word;

int low=0, up=0;

for (char c:word){
	if(c<91) ++up;
	else ++low;
}
if (low >= up) cout << tolow(word);


else cout << toup(word);
return 0;}
