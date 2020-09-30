#include <iostream>
#include <string>

using namespace std;

int main () {

// take input.
string str1, str2;
cin >> str1;
cin >> str2;

// unit case
for (auto & c: str1) c = toupper(c);
for (auto & c: str2) c = toupper(c);

// check order.
if (str1==str2) cout << 0;
else if (str1>str2) cout << 1;
else cout << -1;


return 0;}
