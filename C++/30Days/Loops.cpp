# include <iostream> 
# include <stdlib.h> 

using namespace std; 

//function signatures 
void printLoop(const int); 

int main () {
	int n; 
	cin >> n; 

	printLoop(n); 
	return 0;
}

void printLoop(const int n) {
	
	for (int i = 1; i <= 10; i++) {
		cout << n << " x " << i << " = "; 
		
		int result = 1*n*i;

		cout << result << endl; 
	}


	return; 
}