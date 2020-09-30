#include <iostream>
using namespace std;

int main () {

int m,n;
cin >> m >> n;

int area;
area=n*m;

if (area%2 == 1) --area;

cout << area/2;





return 0;}
