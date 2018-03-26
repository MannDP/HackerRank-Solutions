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
	this.age = initialAge; 
}


int main (const int argc, const char* const argv[]) {
	return 1; 
}

/*
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
*/
