//Diwas Pandit
//zxh15
//September 29, 2024
//Program: Floating Point Equality Body Temperature

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //declare variables
    double bodyTemp;
    
    // get body temperature
    cout << "Enter body temperature in fahrenheit: ";
    cin >> bodyTemp;

    // check if body temperature is normal
    if (fabs(bodyTemp - 98.6) < 0.0001){
        cout << "Body temperature is normal." << endl;
    } else if (bodyTemp > 98.6){
        cout << "Body temperature is above normal." << endl;
    } else {
        cout << "Body temperature is below normal." << endl;
    }

    return 0;

}