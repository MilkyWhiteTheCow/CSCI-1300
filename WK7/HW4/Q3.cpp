#include<iostream>

using namespace std;

int main(){
    
    int priority = -1, tealeaves = -1, sunflowers = -1, toadstools = -1, pineNeedles = -1;
    
    cout << "Select a potion crafting priority:\n1. Health Potion\n2. Magic Potion\n";
    
    while(priority == -1){
        cin >> priority;
        if(priority < 1 || priority > 2){
        
            cout << "Invalid input. Please select 1 or 2.\n";
            priority = -1;
        
        }
    }
    
    while(tealeaves == -1){
        cout << "How many Tealeaves do you have?\n";
        cin >> tealeaves;
        if(tealeaves < 0){
            cout << "Invalid input. Please enter a non-negative integer.\n";
            tealeaves = -1;
        }
    }
    
    while(sunflowers == -1){
        cout << "How many Sunflowers do you have?\n";
        cin >> sunflowers;
        if(sunflowers < 0){
            cout << "Invalid input. Please enter a non-negative integer.\n";
            sunflowers = -1;
        }
    }
    
    while(toadstools == -1){
        cout << "How many Toadstools do you have?\n";
        cin >> toadstools;
        if(toadstools < 0){
            cout << "Invalid input. Please enter a non-negative integer.\n";
            toadstools = -1;
        }
    }
    
    while(pineNeedles == -1){
        cout << "How many Pine Needles do you have?\n";
        cin >> pineNeedles;
        if(pineNeedles < 0){
            cout << "Invalid input. Please enter a non-negative integer.\n";
            pineNeedles = -1;
        }
    }
    
    int product = 1, maxNum, maxNum2;
    
    if(priority == 1){
        
        for(maxNum = 0; product > 0; maxNum++){
            
            product = ((tealeaves / 6) - maxNum) * ((sunflowers) - maxNum) * ((toadstools / 5) - maxNum) * ((pineNeedles / 2) - maxNum);
           
        }
        
        maxNum -= 1;

        tealeaves -= (6 * maxNum);
        sunflowers -= maxNum;
        toadstools -= (5 * maxNum);
        pineNeedles -= (2 * maxNum);

        product = 1;
        
        for(maxNum2 = 0; product > 0; maxNum2++){
            
            product = ((tealeaves / 2) - maxNum2) * ((sunflowers / 3) - maxNum2) * ((toadstools / 10) - maxNum2) * ((pineNeedles) - maxNum2);
           
        }
        
        maxNum2 -= 1;

        cout << "You can make " << maxNum << " Health potion(s) and " << maxNum2 << " Magic potion(s).";
    
    }
    else {
        
        for(maxNum2 = 0; product > 0; maxNum2++){
            
            product = ((tealeaves / 2) - maxNum2) * ((sunflowers / 3) - maxNum2) * ((toadstools / 10) - maxNum2) * ((pineNeedles) - maxNum2);
           
        }

        maxNum2 -= 1;
        
        tealeaves -= (2 * maxNum2);
        sunflowers -= (3 * maxNum2) ;
        toadstools -= (10 * maxNum2);
        pineNeedles -= (maxNum2);

        product = 1;
        
        for(maxNum = 0; product > 0; maxNum++){
            
            product = ((tealeaves / 6) - maxNum) * ((sunflowers) - maxNum) * ((toadstools / 5) - maxNum) * ((pineNeedles / 2) - maxNum);
           
        }

        maxNum -= 1;
        
        cout << "You can make " << maxNum2 << " Magic potion(s) and " << maxNum << " Health potion(s).";
        
    }
    
}