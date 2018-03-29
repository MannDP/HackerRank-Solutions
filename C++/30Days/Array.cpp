# include <iostream> 
# include <string> 
# include <stdlib.h> 

using namespace std; 
void printInReverse (const float[], const int); 
void populateDataset (string, int[], int); 
void printArray (const int[], const int); 

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

	populateDataset(mystring, dataset, size); 
	printArray(dataset, size); 

	return 0; 
}

void populateDataset(const string foo, int dataset[], const int size) {
	int count = 1; 

	for (int i = 0; i < size*2; i+=2) {
		dataset[count - 1] = foo[i]; 
		++count; 
	}

	return; 
}

void printInReverse (const float array[], const int size) {
	for (int m = (size - 1); m > 0; m--)
		cout << array[m] << " "; 

	return;
}

void printArray (const int dataset[], const int size) {
	for (int i = 0; i < size; i++)
		cout << dataset[i] << endl; 

	return; 
}