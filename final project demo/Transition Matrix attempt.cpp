#include <iostream>
#include <array>

using namespace std;



 void InitTransMatrix(double (&arr)[4][4], double Ps, double Pe, double Pi, double Pr)
    {
        arr[0][0] = Ps;
        arr[1][0] = 1 - Ps;
        for(int n = 0;n < 2; n++)
        {
            arr[n+2][0] = 0;
        }

        arr[0][1] = Pe;
        arr[1][1] = 0;
        for(int n = 0;n < 2; n++)
        {
            arr[n+2][1] = (1-Pe)/2;
        }

        for(int n = 0;n < 3; n++)
        {
            arr[n][2] = 0;
        }
        arr[3][2] = Pi;

        arr[0][3] = 1 - Pr;
        for(int n = 0;n < 2; n++)
        {
            arr[n+1][3] = 0;
        }
        arr[3][3] = Pr;

    }

 void IterateStep(double (&arr1)[4][4], double (&arr2)[4])
    {

    for(int i = 0; i < 4; i++)
    {

        double sum = 0.0;

        for(int j = 0; j < 4; j++)
        {
            sum += arr1[i][j] * arr2[j];

        }

        arr2[i] = sum;

    }

    }

     void InitRef(double (&arr1)[4][4], double (&arr3)[4][4])
    {
        for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j];
        }
    }
    }




int main(){
    double transmatrix[4][4];
    double reftransmatrix[4][4];

    double InitialVec[4];
    double RefVec[4];

    double Ps, Pe, Pi, Pr;

    int iterations;

    
    cout << "What is Ps?" << endl;
    cin >> Ps;
    cout << "What is Pe?" << endl;
    cin >> Pe;
    cout << "What is Pi?" << endl;
    cin >> Pi;
    cout << "What is Pr?" << endl;
    cin >> Pr;

    InitTransMatrix(transmatrix, Ps, Pe, Pi, Pr);
    InitRef(transmatrix, reftransmatrix);

    cout << "What is the Initial S value?" << endl;
    cin >> InitialVec[0] >> RefVec[0];
    cout << "What is the Initial E value?" << endl;
    cin >> InitialVec[1] >> RefVec[1];
    cout << "What is the Initial I value?" << endl;
    cin >> InitialVec[2] >> RefVec[2];
    cout << "What is the Initial R value?" << endl;
    cin >> InitialVec[3] >> RefVec[3];

    cout << "How many iterations do you want to calculate?" << endl;
    cin >> iterations;



    for(int i = 0; i < iterations; i++)
    {
        IterateStep(reftransmatrix, RefVec);
    }

     cout << "Your vector is " << endl;

    for(int i = 0; i < 4; i++)
    {
       cout << RefVec[i] << endl;
    }

    cin >> iterations;

    return 0;
}