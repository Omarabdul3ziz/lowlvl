#include <iostream>
#include <string>
using namespace std;

int main () {

string t="that I hate ";
string v="that I love ";

int n;
cin >> n;

string lay[101];

lay[0] = "I hate ";

for (int i=1; i<n; i+=2) { lay[i] = v;}

for (int i=2; i<n; i+=2) { lay[i] = t;}
	
lay[n] = "it";

for (string w: lay) cout << w;


return 0;}
