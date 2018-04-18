# include <iostream> 
# include <stdlib.h> 
using namespace std; 

//function signatures 
int max_of_four (const int, const int, const int, const int); 

int main (const int argc, const char* const argv[]) {
	int num1; 
	int num2; 
	int num3; 
	int num4; 

	cin >> num1 >> num2 >> num3 >> num4; 

	int result = max_of_four(num1, num2, num3, num4); 
	cout << result << endl; 

	return 0; 
}

int max_of_four(const int a, const int b, const int c, const int d) {
	int max = a;
	
	if (b > max) {
		max = b; 
	} 

	if (c > max) {
		max = c; 
	}

	if (d > max) {
		max = d; 
	}

	return max; 
}
