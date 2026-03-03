#include<iostream>

using namespace std;

bool perfectNumber(int number){

    int digits, i, referenceNum = 0, result, resultExp = 1, order = 1;

    for(digits = 0; i != 0; digits++){

        for(int j = 0; j < digits; j++){

            order = order * 10;

        }

        if((number / order) == 0){

            i = 0;

        }
    }

    order = 1;

    for(int k = 0; k < digits; k++){

        for(int j = 0; j < k; j++){

            order = order * 10;

        }

        result =  (number / order) % 10;

        for(int l = 0; l < digits; l++){

            resultExp = resultExp * result;

        }

        referenceNum += resultExp;

        order = 1;

    }

    if(referenceNum == number){

        return 1;

    }
    else{

        return 0;

    }

}