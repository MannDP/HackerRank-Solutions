//#include <bits/stdc++.h>
# include <iostream> 
using namespace std;

//function signature 
int round (const double);  

int main() {
    //input logic 
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
   	
    double tipPercent = double(tip_percent); 
    double taxPercent = double(tax_percent); 

   	double tipCost = meal_cost*(tipPercent/100); 
   	double taxCost = meal_cost*(taxPercent/100); 


   	double total = tipCost + taxCost + meal_cost; 
   	int rounded_total = round(total); 

   	cout << "The total meal cost is " << rounded_total << " dollars." << endl;  

    return 0;
}

int round (const double total) {
	int cost = int(total); 

	double cents = total - cost; 

	if (cents >= 0.50) {
		return cost + 1; 
	} 

	else {
		return cost;
	}
}