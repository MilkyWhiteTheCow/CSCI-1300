#include <iostream>

using namespace std;

int main() {
    // Collect User Input #1
    int age;

    cout << "Enter your age: ";
    cin >> age;                                // TODO 1/3 What keyword do you use to read in user input?

    // Collect User Input #2
    string username;

    cout << "Enter your username: ";
    cin >> username;                            // TODO 1.5/3 Same thing here

    // Compare Integers
    if (age >= 18) {                            // TODO 2/3 The condition is whether the user's age is greater than or equal to 18
        cout << "You are an adult." << endl;
    }
    else if(age >= 13) {

        cout << "You are an teenager" << endl;

    }
    else {
        cout << "You are a child" << endl;
    }

    // Substring example
    string firstThree = username.substr(0, 3);  // TODO 3/3 What parameter(s) do you pass to get the first three letters of the username?
    cout << "The first three letters of your username is: " << firstThree << endl;

    return 0;
}