
//Diwas Pandit
//zxh15
//September 28, 2024
//Program: Toll Calculator

#include <iostream>
#include <iomanip>
using namespace std;

//declare main function
int main(){

    //declare variables
    int timeHour; // 24 hour format; Travel hour
    int timeMinute; // travel minute
    int typeOfDay; // 0: Weekday, 1: Weekend
    int numPeople; // number of people
    char inputColon; // for time format
    double tollCharge; // toll charge

    //get input
    cout << "Enter time of travel (HH:MM in 24 Hours Format): ";
    //read int (hour), char (colon), int (minute)
    cin >> timeHour >> inputColon >> timeMinute;

    cout << "Enter type of day (0: Weekday, 1: Weekend): ";
    //read int (type of day)
    cin >> typeOfDay;

    cout << "Enter number of people in vehicle: ";
    //read int (number of people)
    cin >> numPeople;

    if (typeOfDay == 0){ // Weekday
        if (timeHour < 6){ // before 6 am
            tollCharge = 1.55;
        }
        else if (timeHour < 10){ // 6 to 10 am
            tollCharge = 4.65;
        }
        else if (timeHour < 18){ // 10 am to 5:59 pm
            tollCharge = 2.35;
        } else {
            tollCharge = 1.55; // 6 pm and after
        }
    }
    else{ // Weekend
        if (timeHour < 8){ // before 8 am
            tollCharge = 1.55;
        }
        else if (timeHour < 12){ // 8 to 11:59 am
            tollCharge = 3.05;
        }
        else if (timeHour < 16){ // 12 to 3:59 pm
            tollCharge = 3.45;
        } else if(timeHour < 19){ // 4 to 6:59 pm
            tollCharge = 3.60; 
        } else if (timeHour < 22){ // 7 to 9:59 pm
            tollCharge = 3.05;
        } else {
            tollCharge = 1.55; // 10 pm and after
        }
    }

    //check if there are more than 3 people
    if (numPeople >= 3){
        if((typeOfDay ==0) && (timeHour >>6) && (timeHour < 10)){
            tollCharge = tollCharge * 0.5;
        } else {
            tollCharge = 0.0;
        }
    }

    //output toll am/pm format
    cout << "Toll at ";

    //output hour format
    if (timeHour ==0){
        cout << "12:";
    } else if (timeHour <= 12){
        cout << timeHour << ":";
    } else {
        cout << timeHour - 12 << ":";
    }

    //output minute format
    cout << setfill('0') << setw(2) << timeMinute;

    //output am/pm format
    if (timeHour < 12){
        cout << " am";
    } else {
        cout << " pm";
    }

    cout << " is " << tollCharge << endl;

    return 0;

}