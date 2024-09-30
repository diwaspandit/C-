//Diwas Pandit
//zxh15
//September 28, 2024
//Program: Restaurant Wait Time Calculator

#include <iostream>
using namespace std;

//declare main function
int main(){

    //declare variables
    int waitTime; // wait time
    int partySize; // number of people in party
    char day; // day of the week
    bool isLargeParty; // true or false
    bool isWeekend; // true or false

    // get day reservation
    cout << "Enter day of reservation (T, W, R, F, S, U): ";
    cin >> day;

    if (day == 'F' || day == 'S' || day == 'U'){
        isWeekend = true;
    } else {
        isWeekend = false;
    }

    // get party size
    cout << "Enter number of people in party: ";
    cin >> partySize;
    isLargeParty = partySize >= 6;

    // calculate wait time
    if (isWeekend && !isLargeParty){
        waitTime = 30;
    } else if (!isWeekend && !isLargeParty){
        waitTime = 10;
    } else if (isWeekend && isLargeParty){
        waitTime = 45;
    } else {
        waitTime = 15;
    }

    cout << "Restaurant wait time is " << waitTime 
        << " minutes." << endl;

    return 0;
}