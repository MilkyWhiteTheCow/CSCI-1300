#include<iostream>

using namespace std;

int main() {
    
    double temp1, temp2, temp3;
    
    cout << "Enter temperatures over the last three days:" << endl;
    cin >>temp1 >> temp2 >> temp3;
    
    if(temp1 < 0) {
        
        cout << "Invalid temperature input.";
        return(0);
    }
    else if(temp2 < 0) {
        
        cout << "Invalid temperature input.";
        return(0);
    }
    else if(temp3 < 0) {
        
        cout << "Invalid temperature input.";
        return(0);
    }
    if(temp1 < temp2) {
        if(temp2 < temp3) {
            
            cout << "It's getting warmer!";
            
        }
        else {
            
            cout << "The temperature is changing unpredictably.";
            
        }
    }
    else if(temp2 == temp1) {
        
        cout << "The temperature is changing unpredictably.";
        
    }
    else if(temp3 < temp2) {
        
        cout << "It's getting cooler!";
        
    }
    else {
        
        cout << "The temperature is changing unpredictably.";
        
    }
    
}