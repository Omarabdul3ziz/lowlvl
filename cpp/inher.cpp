#include <iostream>
using namespace std;

class Animal {
	public:
		void eat() {cout << " I eat " << endl;}
		void sleap(){ cout << " I sleap " << endl;}
};
class Dog : public Animal {
	public:
		void bark() {cout << " Woof Woof " << endl;}
};
int main () {


	Dog zero ;
	zero.eat();
	zero.sleap();
	zero.bark();





	return 0;}
