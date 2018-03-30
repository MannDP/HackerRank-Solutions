# include <iostream> 
# include <string> 
# include <stdlib.h> 

using namespace std; 
void printInReverse (const int[], const int); 
void printArray (const int[], const int); 
void populateArray(int[], const int, const string); 

int main() {
	int size; 
	cin >> size; 

    string mystring; 
    getline(cin >> ws, mystring);
	//cout << mystring << endl; 
	
	/*
	for (int i = 0; i < size*2; i+=2) {
		cout << mystring[i] << endl; 
	}
	*/

	int dataset[size]; 
	populateArray(dataset, size, mystring); 
	//printArray (dataset, size); 
	
	printInReverse(dataset, size); 

	return 0; 
}

void populateArray (int dataset[], const int size, const string foo) {
	
	int index_count = 0;


	for (int i = 0; i < size*2; i+=2) {
		dataset[index_count] = foo[i] - 48; 
		cout << "the value of mystring at this index is: " << foo[i] << endl; 
		cout << "the value assigned to the dataset at this index: " << index_count << ", is " << dataset[index_count] << endl;
		++index_count; 
		cout << endl; 
	}

	return; 
}

void printInReverse (const int array[], const int size) {
	for (int m = (size - 1); m >= 0; m--)
		cout << array[m] << " "; 

	return;
}

void printArray (const int dataset[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << dataset[i] << endl; 
	}
	 
	return; 
}