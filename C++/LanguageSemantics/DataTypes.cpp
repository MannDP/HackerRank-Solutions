# include <iostream> 
# include <stdlib.h> 
# include <iomanip>

using namespace std; 

int main (const int argc, const char* const argv[]) {
	int a; 
	long b; 
	char c; 
	float d; 
	double e; 

	scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
	cout << a << endl; 
	cout << b << endl; 
	cout << c << endl; 
	cout << std::setprecision(2) << std::fixed << d << endl; 
	cout << std::setprecision(5) << std::fixed << e << endl; 
}