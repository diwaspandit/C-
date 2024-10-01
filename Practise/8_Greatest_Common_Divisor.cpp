//Diwas Pandit
//zxh15
//October 1, 2024
//Program: Greatest Common Divisor

#include <iostream>
using namespace std;

//declare main function
int main(){

    // declare variables
    int numA;
    int numB;

    cout << "Enter first positive integer: ";
    cin >> numA;

    cout << "Enter second positive integer: ";
    cin >> numB;

    while (numA != numB){
        if (numB > numA){
            numB = numB - numA;
        }
        else{
            numA = numA - numB;
        }
    }

    cout << "GCD is: " << numA << endl;

    return 0;
}