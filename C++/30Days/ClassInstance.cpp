#include <iostream>
using namespace std;

class Person {
	public: 
		//data variables 
		int age; 

		//constructors
		Person(int initialAge); 
		
		//function signuatures 
		void amIOld(); 
		void yearPasses(); 
}; 

Person::Person(int initialAge) {
	if (initialAge < 0) {
		this->age = 0; 
		cout << "Age is not valid, setting age to 0." << endl; 
	}

	else 
		this->age = initialAge; 
}

void Person::yearPasses() {
	++age; 
	
	return; 
}

void Person::amIOld() {
	if (this->age < 13) {
		cout << "You are young." << endl; 
	}

	else if (this->age >= 13 && this->age < 18) {
		cout << "You are a teenager." << endl; 
	} 

	else 
		cout << "You are old." << endl; 

	return; 
}

int main (const int argc, const char* const argv[]) {
	int t; 
	int age; 

	cin >> t; 

	for (int i = 0; i < t; i++) {
		cin >> age; 
		//created an object of the person class
		Person p(age); 

		for (int j = 0; j < 3; j++) { 
			p.yearPasses(); 
		}

		p.amIOld(); 

		cout << '\n'; 
	} 

	return 0; 
}