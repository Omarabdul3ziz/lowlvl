#include <iostream>
#include <string>

using namespace std;

int main () {

	string word, abbrev;
	int n;
	cin >> n;

	for (int i=0; i<=n; ++i) {
		getline(cin,word);

		if (word.length() <= 10) cout << word << endl;
		else { abbrev = word[0] + to_string(word.length()-2) + word[word.length()-1];
			cout << abbrev << endl;} 
	}




	return 0;}
