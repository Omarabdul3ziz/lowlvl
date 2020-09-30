#include <iostream>
using namespace std;

class person {
	public:
	char name[50];
	int age;
	double salary;
	
	void get(char n, int a, double s) {
		name=n;
		age=a;
		salary=s;}

	double rais (double salary) return (salary+1000);

	int grow (int age ) return (age+10);
};

	
int main () {

	person omar;
	omar.get("Omar", 22, 10000.0);

	cout << "Now : " << omar.name << " " << omar.age << " " << omar.salary << endl;

	cout << "Then: " << omar.name << " " << omar.grow(omar.age) << " " omar.rais(omar.salary) << endl;	





return 0;}
