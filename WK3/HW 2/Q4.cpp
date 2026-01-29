#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    
    char carType;
    int nights;
    double total;
    
    cout << "Which car type (A, B, C, or D) would you like to rent?\n";
    cin >> carType;
    
    cout << "How many days would you like to rent this car?\n";
    cin >> nights;
    
    if(nights <= 0) {
        
        cout << "Please enter valid input.";
        return(0);
        
    }
    
    switch(carType) {
        case 'A':
            total = 1.23 * (80 + (nights * 15));
            break;
        case 'B':
            total = 1.23 * (110 + (nights * 25));
            break;
        case 'C':
            total = 1.23 * (160 + (nights * 35));
            break;
        case 'D':
            total = 1.23 * (220 + (nights * 45));
            break;
        default:
            cout << "Please enter valid input.\n";
            return(0);
            break;
    }
    
    
    
    cout << "Your total is $" << fixed << setprecision(2) << total << endl;
    
    return(0);
    
}