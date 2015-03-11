// Basic Payroll application
// Digital XIII Inc.
// 
// Originator: Martino Henderson
// Date: March 5, 2015 

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class People {
	private:
		string fname, lname;
		int age;

	public:
		string getFirstName() {return fname;}
		string getLastName() {return lname;}
		int getAge() {return age;}

		void setFirstName(string first) {fname = first;}
		void setLastName(string last) {lname = last;}
		void setAge(int yrsold) {age = yrsold;}
};

int main() {
	cout << endl;
	cout << "\t\tPayroll application\n";
	cout << endl;

	return 0;
}
