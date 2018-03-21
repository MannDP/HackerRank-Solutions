# include <stdlib.h>
#include <vector>

//hacker-rank problem to return Bob and Alice points

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    
    vector < int > results; 
    
    int alice_points = 0; 
    int bob_points = 0; 
    
    if (a0 > b0) {
        bob_points++; 
    }
    
    else if (a0 < b0) {
        alice_points++; 
    }
    
    if (a1 > b1) {
        bob_points++; 
    }
    
    else if (a1 < b1) {
        alice_points++; 
    }
    
    if (a2 > b2) {
        bob_points++; 
    }
    
    else if (a2 < b2) {
        alice_points++; 
    }
    
    return 1;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
