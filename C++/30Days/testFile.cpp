# include <iostream> 
# include <stdlib.h> 
# include <vector>
# include <sstream> 
using namespace std; 

//function signatures 
bool populateArray(const int, const char* const[]); 
bool reversePrint(const int[]); 

int main(const int argc, const char* const argv[]) {
	int size; 
	cin >> size; 
	
	getline(cin, input);

	istringstream parser(input);
	vector<int> numbers;

	numbers.insert(numbers.begin(),
               	istream_iterator<int>(parser), istream_iterator<int>());

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << endl;
	}
}

