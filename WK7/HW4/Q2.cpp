#include<iostream>

using namespace std;

int main() {
    
    int ai = 0;
    
    while(ai == 0){
    cout << "Enter a number between 10 and 500:\n";
    cin >> ai;
    if (ai <= 10 || ai >= 500){
        cout << "Invalid input.\n";
        ai = 0;
    }
    }
    
    int steps;
    
    for(steps = 0; ai != 1; steps++) {
        if((ai % 2) > 0){
        
        ai = ai * 3 + 1;
        cout << ai << endl;
        }
        else{
        
        ai = ai/2;
        cout << ai << endl;
        }
    }
    cout << "Total steps: " << steps;
}