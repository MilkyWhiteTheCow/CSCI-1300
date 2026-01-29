#include <iostream>

using namespace std;

int main() {

    //switch() statement compares a single variable to multiple different vlaues

    string digit_name;
    int digit;
    cout << "enter a digit 1-4: ";
    cin >> digit;

    switch(digit) {
        case 1:
            digit_name = "one";
            break;
        case 2:
            digit_name = "two";
            break;
        case 3:
            digit_name = "three";
            break;
        case 4:
            digit_name = "four";
            break;

    }

    cout << "Your number is: " << digit_name;

    return(0);



}