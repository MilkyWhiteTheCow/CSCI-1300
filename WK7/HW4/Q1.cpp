#include<iostream>

using namespace std;

int calculateTime(int targetSize){
    
    int seconds = 0, rateOfChange, sectionSize = 1;
    
    for(rateOfChange = 1; sectionSize < targetSize; rateOfChange++){
        
        sectionSize += rateOfChange;
        
        seconds++;
    }
    return seconds;
}

int main(){
    
    int headTime, midBodyTime, lowerBodyTime, headSize = 0, mBSize = 0, lBSize = 0;
    
    cout << "Enter head size:\n";
    while(headSize == 0){
    cin >> headSize;
    if(headSize <= 0){
        cout << "Please enter a positive integer for head size:\n";
        headSize = 0;
    }
    }
    
    cout << "Enter mid-body size:\n";
    while(mBSize == 0){
    cin >> mBSize;
    if(mBSize <= 0){
        cout << "Please enter a positive integer for mid-body size:\n";
        mBSize = 0;
    }
    }
    
    cout << "Enter lower-body size:\n";
    while(lBSize == 0){
    cin >> lBSize;
    if(lBSize <= 0){
        cout << "Please enter a positive integer for lower-body size:\n";
        lBSize = 0;
    }
    }
    
    headTime = calculateTime(headSize);
    midBodyTime = calculateTime(mBSize);
    lowerBodyTime = calculateTime(lBSize);
    int totalTime = headTime + midBodyTime + lowerBodyTime;
    
    cout << "Time to reach head size: " << headTime << " seconds\n";
    cout << "Time to reach mid-body size: " << midBodyTime << " seconds\n";
    cout << "Time to reach lower-body size: " << lowerBodyTime << " seconds\n";
    cout << "Total time to create the snowman: " << totalTime << " seconds\n";
}