#include<iostream>

using namespace std;

int main() {

    int number, remainder, null;


    cout << "Enter a whole number";
    cin >> number;

    remainder = number % 2;

    if (remainder == 1){

        cout << "Your number is odd";
        cout << "hello woooooorld";
        cin >> null;

    }
    else{

        cout << "Your number is even";
        cout << "hello woooooorld";
        cin >> null;

    }


    return(0);

}