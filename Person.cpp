/* Payroll Application
 * Digital XIII Inc
 * www.tinoxiii.com
 * Martino Henderson
 * March 15, 2015
 * file: Person.cpp
 */

#include "pr-main.h"

class Person {
	private:
		string firstName;
		string lastName;
		int age;
	public:
		void setFirstName(string fName);
		void setLastName(string lName);
		void setAge(int yrsold);

		string getFirstName();
		string getLastName();
		int getAge();

		string printFirstName();
		string printLastName();
		int printAge();
		string printFullName();
	protected:
};

// Functions to set the private variables.
void Person::setFirstName(string fName) {
	firstName = fName;
}
void Person::setLastName(string lName) {
	lastName = lName;
}
void Person::setAge(int yrsold) {
	age = yrsold;
}

// Functions to retrieve the private variables.
string Person::getFirstName() {
	return firstName;
}
string Person::getLastName() {
	return lastName;
}
int Person::getAge() {
	return age;
}

// Functions to print the private variables.
string Person::printFirstName() {
	cout << firstName;
	return 0;
}
string Person::printLastName() {
	cout << lastName;
	return 0;
}
int Person::printAge() {
	cout << age;
	return 0;
}
string Person::printFullName() {
	cout << firstName << " " << lastName;
	return 0;
}

