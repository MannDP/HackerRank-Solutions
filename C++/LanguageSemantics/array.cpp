# include <iostream> 
# include <stdlib.h> 
using namespace std; 

//function signatures 
void printArray(const int[], const int); 

int main (const int argc, const char* const argv[]) {
	int size; 
	cin >> size; 

	int dataset[size]; 

	for (int i = 0; i < size; i++) {
		int tmp; 
		cin >> tmp; 
		dataset[i] = tmp; 
	}

	printArray(dataset, size); 
}

void printArray(const int dataset[],const int numElem) {
	for (int i = (numElem-1); i >= 0; i--) {
		cout << dataset[i] << " "; 
	}

	return; 
}