# include <iostream> 
# include <string> 
using namespace std;

int main (const int argc, const char* const argv[]) {
	int N; 
	cin >> N; 

	if (N%2 == 0) {
		if (N > 20 || (N >= 2 && N <= 5)) 
			cout << "Not Weird" << endl; 

		else
			cout << "Weird" << endl; 
	}

	else {
		cout << "Weird" << endl; 
	}

	return 0; 
}