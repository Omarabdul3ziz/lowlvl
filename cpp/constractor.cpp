#include <iostream>
using namespace std;

class Member {

	int id;
	int age;

	public:
	Member(int i, int a) {
		id=i;
		age=a;}
	void print() {
		cout << "#" << id << " : " << age << endl; }};
		
int main () {

Member omar(3, 22); omar.print();
Member abdulaziz(1, 52); abdulaziz.print();







return 0;}
