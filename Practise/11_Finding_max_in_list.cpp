//Diwas Pandit
//zxh15
//October 3, 2024

//Program: Finding the maximum number in a list

#include <iostream>
using namespace std;

int main(){

    //declare variables
    int maxSoFar, currValue, numValues;
    int i;

    cin >> numValues;

    for (i=0;i< numValues; ++i){
        cin >> currValue;

        if (i==0){
            maxSoFar = currValue;
        }
        else if (currValue > maxSoFar){
            maxSoFar = currValue;
        }
    }

    if (numValues > 0){
        cout << "Max: " << maxSoFar << endl;
    } 

    return 0;
}