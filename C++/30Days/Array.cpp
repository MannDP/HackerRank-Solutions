# include <iostream> 
# include <string> 
# include <stdlib.h> 

using namespace std; 
void printInReverse (const float[], const int); 

int main() {
	int size; 
	cin >> size; 

	int dataset[size]; 

	for (int i = 0; i < size; i++) {
		int tmp; 
		cin >> tmp; 
		
		dataset[i] = tmp; 
	}

	printInReverse(dataset, size); 

	return 0; 
}

void printInReverse (const float array[], const int size) {
	for (int m = (size - 1); m > 0; m--)
		cout << array[m] << " "; 

	return; 
}