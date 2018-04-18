#include <vector>
#include <iostream>
#include <string> 
using namespace std;

void print_function (string input); 

int main() {
    
    int t; 
    cin >> t; 

    vector <string> stringArray; 

    for (int i = 0; i < t; i++) {
    	string input; 
    	cin >> input; 

      stringArray.push_back(input); 
    }

    for (int i = 0; i < t; i++) {
      string tmp = stringArray[i];
      print_function(tmp); 
    }

    return 0;
}

void print_function (string input) {
	int count = 1; 
    	
    for (int i = 0; input[i] != 0; i++) {
   		count++; 
   	}
   
   	count = count - 1; 

   	int even_count; 
   	int odd_count; 

   	if (count % 2 == 0) {
   		even_count = count/2; 
   		odd_count = count/2; 
   	}

   	else if (count % 2 != 0) {
   		odd_count = (count - 1)/2; 
   		even_count = count - odd_count; 
   	}

   	//cout << "count is: " << count << " even count is: " << even_count << " odd count is: " << odd_count << endl; 
   	//need to print out all the even numbers first
   	
   	int index_counter = 0; 
   	for (int m = 0; index_counter <= even_count; m+= 2) {
   		cout << input[m]; 
   		++index_counter; 
   	}

   	cout << " "; 

   	//reset the counter and print out the odd numbers
   	index_counter = 1; 
   	for (int m = 1; index_counter <= odd_count; m+= 2) {
   		cout << input[m]; 
    	++index_counter; 
    }

    cout << endl; 

    return; 
}