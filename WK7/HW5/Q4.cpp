#include<iostream>

using namespace std;

int main(){

    int gorg = -1;

    while(gorg == -1){

    int menu = 0, sugar, flour, eggs, vanilla, cocoa, creamCheese;

    while(menu == 0){

    cout << "Select a numerical option:\n=== menu ===\n1. Vanilla cake\n2. Chocolate cake\n3. Pound cake\n4. Quit\n";
    cin >> menu;

    if(menu < 1 || menu > 4){

        cout << "Invalid input.\n";
        menu = 0;

    }
}
switch(menu){
    case 1:

        cout << "How many grams of flour do you have?\n";
        cin >> flour;
        cout << "How many grams of sugar do you have?\n";
        cin >> sugar;
        cout << "How many eggs do you have?\n";
        cin >> eggs;
        cout << "How many grams of vanilla extract do you have?\n";
        cin >> vanilla;

        if(((flour / 440) * (sugar / 400) * (eggs / 3) * (vanilla / 15)) != 0){

            cout << "You can make a vanilla cake.\n";

        }
        else{

            cout << "You don't have enough for a vanilla cake.\n";

        }

        break;
    case 2:

        cout << "How many grams of flour do you have?\n";
        cin >> flour;
        cout << "How many grams of sugar do you have?\n";
        cin >> sugar;
        cout << "How many eggs do you have?\n";
        cin >> eggs;
        cout << "How many grams of cocoa powder do you have?\n";
        cin >> cocoa;

        if(((flour / 440) * (sugar / 400) * (eggs / 3) * (cocoa / 120)) != 0){

            cout << "You can make a chocolate cake.\n";

        }
        else{

            cout << "You don't have enough for a chocolate cake.\n";

        }
        
        break;
    case 3:

        cout << "How many grams of flour do you have?\n";
        cin >> flour;
        cout << "How many grams of sugar do you have?\n";
        cin >> sugar;
        cout << "How many eggs do you have?\n";
        cin >> eggs;
        cout << "How many grams of cream cheese do you have?\n";
        cin >> creamCheese;

        if(((flour / 440) * (sugar / 400) * (eggs / 3) * (creamCheese / 220)) != 0){

            cout << "You can make a pound cake.\n";

        }
        else{

            cout << "You don't have enough for a pound cake.\n";

        }
        
        break;
    case 4:

        cout << "Goodbye!";
        gorg = 0;

        break;
}
}
}