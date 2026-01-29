#include<iostream>

using namespace std;

int main() {
    
    float budget, miles, nights, centsPerMile, gasCost, budgetPerNight;
    
    centsPerMile = .16;
    
    cout << "What is your budget?\n";
    cin >> budget;
    
    cout << "How many miles will you drive?\n";
    cin >> miles;
    
    cout << "How many nights do you want to spend there?\n";
    cin >> nights;
    
    if(budget <= 0){
        
        cout << "Invalid input(s).\n";
        
        return(0);
        
    }
    else {
        gasCost = miles * centsPerMile;
        budget = budget - gasCost;
        budgetPerNight = budget / nights;
    }
    if(miles <= 0) {
        
        cout << "Invalid input(s).\n";
        
    }
    else if(nights <= 0) {
        
        cout << "Invalid input(s).\n";
        
    }
    else if(budgetPerNight < 20) {
        
        cout << "This trip is outside your budget.\n";
        
    }
    else if(budgetPerNight < 50) {
        
        cout << "You can afford to go camping on this trip.\n";
        
    }
    else if(budgetPerNight < 100) {
        
        cout << "You can afford to stay in a cheap motel on this trip.\n";
        
    }
    else {
        
        cout << "You can afford to stay in a nice hotel on this trip.\n";
        
    }
    
    return(0);
    
}