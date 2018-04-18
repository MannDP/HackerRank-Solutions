# include <iostream> 
# include <stdlib.h> 
using namespace std; 

//function signatures 
bool sorted (int*, int*); 

int main (const int argc, const char* const argv[]) {
	int a; 
	int b; 

	int* ptra = &a; 
	int* ptrb = &b; 

	cin >> a >> b; 

	sorted (ptra, ptrb); 

	cout << *ptra << endl; 
	cout << *ptrb << endl; 

	return 1; 
}

bool sorted (int* a, int* b) {
	int tmpa = *a; 
	
	*a = (*b + *a); 
	*b = (tmpa - *b); 

	if (*b < 0) {
		*b = -1*(*b); 
	}

	return true; 
}