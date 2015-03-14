// Basic Payroll application
// Digital XIII Inc.
// 
// Originator: Martino Henderson
// Date: March 5, 2015 

#include "pr-main.h"

class Person {
	private:
		string firstName;
		string lastName;
		int age;
	public:
		string getFirstName(string);
		string getLastName(string);
		int getAge(int);

		void setFirstName(string);
		void setLastName(string);
		void setAge(int);
	protected:
};

string Person::getFirstName(string firstName) {
	return firstName;
}

string Person::getLastName(string lastName) {
	return lastName;
}

int Person::getAge(int age) {
	return age;
}

void Person::setFirstName(string fName) {
	cout << "Enter your first name: ";
	cin >> fName;
	firstName = fName;
}

void Person::setLastName(string lName) {
	cout << "Enter your last name: ";
	cin >> lName;
	lastName = lName;
}

void Person::setAge(int yrsold) {
	cout << "Enter your age: ";
	cin >> yrsold;
	age = yrsold;
}

int main() {

	string fName, lName;
	int yrsold;

	Person newPerson1;

	cout << endl;
	cout << "\t\tPayroll application\n";
	cout << endl;

	

	return 0;
}
