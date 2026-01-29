#include<iostream>

using namespace std;

int main() {

// Remember that assignment operator is = and its different from == or !=
// = assigns vaules to variables. Any data previously stored will be overwritten with whatever is on the other side of the = sign
// the == operator is a condition. It will return true if the values it relates are equal to eachother 
// you can use the < > operators for strings too. It starts by comparing the length of characters (spaces to the left or right of string not included) ascii values of characters in order. 
// EX:
string name1 = "Bonnie";
string name2 = "Clyde";

cout << "Does Bonnie have a lesser string value than Clyde?\n";

if (name1 < name2) {


    cout << "True\n";


}
else {

    cout << "False\n";

}

return(0);

}

