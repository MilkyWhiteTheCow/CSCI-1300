#include <iostream>

using namespace std;

void substrCharLocation(string phrase, char target, int size){

    cout << "Here are all length-" << 3 << " substrings containing the character '" << target << "':\n";

    int phraseLength = phrase.length() - size + 1;
    string subPhrase;
    char subChar;

    for(int i = 0; i < phraseLength; i++){

        subPhrase = phrase.substr(i, size);
        for(int j = 0; j < size; j++){
            
            subChar = subPhrase[j];
             
            if(subChar == target){
                
                j = size;

                if(i == (phraseLength)){
                    cout << subPhrase;
                }
                else{
                    cout << subPhrase << "\n";
                }
            }

        }

    }
}

int main(){

    string smth;
    char yup;
    int big;

    cout << "Enter a string:\n";
    cin >> smth;
    cout << "Enter a character:\n";
    cin >> yup;
    cout << "Enter a substring size:\n";
    cin >> big;

    substrCharLocation(smth, yup, big);

    return 0;

}