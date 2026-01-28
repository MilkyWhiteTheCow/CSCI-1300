#include<iostream>

using namespace std;

int main() {

    int number, remainder, null;


    cout << "Enter a whole number";
    cin >> number;

    remainder = number % 2;

    if (remainder == 1){

        cout << "Your number is odd\n";
        cout << "hello woooooorld\n";
        cin >> null;

    }
    else{

        cout << "Your number is even\n";
        cout << "hello woooooorld\n";
        cin >> null;

    }


    return(0);

}