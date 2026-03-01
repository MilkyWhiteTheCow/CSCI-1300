#include<iostream>

using namespace std;

int main() {
    
    int category, instrument;
    
    cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion\n";
    cin >> category;
    
    switch(category) {
        case 1:
            cout << "Select an instrument: (1)Trumpet (2)Trombone\n";
            cin >> instrument;
            switch(instrument) {
                case 1:
                    cout << "Your instrument will be $570.\n";
                    break;
                case 2:
                    cout << "Your instrument will be $500.\n";
                    break;
                default:
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;
            
        case 2:
            cout << "Select an instrument: (1)Flute (2)Saxophone\n";
            cin >> instrument;
            switch(instrument) {
                case 1:
                    cout << "Your instrument will be $425.\n";
                    break;
                case 2:
                    cout << "Your instrument will be $225.\n";
                    break;
                default:
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;
        case 3:
            cout << "Select an instrument: (1)Snare Drum (2)Cymbals\n";
            cin >> instrument;
            switch(instrument) {
                case 1:
                    cout << "Your instrument will be $275.\n";
                    break;
                case 2:
                    cout << "Your instrument will be $350.\n";
                    break;
                default:
                    cout << "Please enter a valid input.\n";
                    break;
            }
            break;
        
        default:
            cout << "Please enter a valid input.\n";
            break;
    }
    
}