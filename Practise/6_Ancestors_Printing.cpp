//Diwas Pandit
//zxh15
//September 30, 2024
//Program: Ancestors Printing

#include <iostream>
using namespace std;

//declare main function 
int main(){

    //declare variables
    const int YEARS_PER_GEN = 20;
    int userYear;
    int consYear;
    int numAnc;

    consYear = 2024;
    numAnc = 2;

    // get input from user
    cout << "Enter a past year (neg. for B.C.):";
    cin >> userYear;

    while (consYear >= userYear){
        cout << "Ancestors in " << consYear << ": " << numAnc << endl;

        numAnc = 2 * numAnc;
        
        consYear = consYear - YEARS_PER_GEN;
    }

    return 0;
}