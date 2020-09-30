#include <iostream>
using namespace std;

// draw structure
struct Person {
	char name[100];
	int age;
	double salary;
};

int main () {

	Person p1;
	cout << "Enter your name: ";
	cin.get(p1.name, 100);

	cout << "Your age and your salary: ";
	cin >> p1.age >> p1.salary;

	cout << "Hey " << p1.name << ", " << p1.age << " years old and " << p1.salary << "pound.";





return 0;}
