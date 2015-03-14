/* Payroll Application
 * Digital XIII Inc.
 * www.tinoxiii.com
 * Martino Henderson
 * March 5, 2015
 */

#include "pr-main.h"
#include "Person.cpp"

int main() {
	
	Person man1, man2;
	
	cout << "\n\n\t\tPayroll Application" << endl;

	cout << "Full name is: " << man1.getFirstName() << " " \
		<< man1.getLastName() << endl;
	cout << "Age: " << man1.getAge() << endl << endl;

	cout << "Your full name is: " << man2.printFullName() << endl;
	cout << "Your first name is: " << man2.printFirstName() << endl;
	cout << "Your last name is: " << man2.printLastName() << endl;
	cout << "Your age is: " << man2.printAge() << endl;

	return 0;
}
