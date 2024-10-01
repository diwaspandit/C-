//Diwas Pandit
//zxh15
//September 30, 2024
//Program: Area and Circumference of Circle and Square

#include <iostream>
#include <cmath>
using namespace std;

//declare main function
int main(){

    //declare constants
    const double PI = 3.14159;

    int choice_A;
    int choice_B;
    double total;

    //title menu
    cout << " Welcome to my shape calculator" << endl << endl 
        << "Please select one of the following" << endl
        << "1. Circle" << endl
        << "2. Square" << endl;

    //get user input
    cin >> choice_A;

    switch(choice_A){

        //Circle Selected

        case 1:
            //declare input
            double radius;
            cout << "You have selected Circle!" << endl << endl
                << "Please enter the radius of your circle" << endl;
            cin >> radius;
            cout << "Please select one of the following" << endl
                << "1. Area" << endl
                << "2. Circumference" << endl;
            cin >> choice_B;

            //Calculate the area or Circumference //
            switch(choice_B){
                case 1:
                    total = PI * pow(radius, 2.0);
                    cout << "The area of Circle is " << total << endl;
                    break;

                case 2:
                    total = PI * 2 * radius;
                    cout << "The circumference of Circle is " << total << endl;
                    break;

                default:
                    cout << "Invalid input. Terminating the program." << endl;
                    break;
            }
            break;

        case 2:
            double length;
            cout << "You have selected Square!" << endl << endl
                << "Please enter the length of a side." << endl;
            cin >> length;
            cout << "Please select one of the following" << endl
                << "1. Area" << endl
                << "2. Perimeter" << endl;
            cin >> choice_B;

            switch(choice_B){
                case 1:
                    total = pow(length, 2.0);
                    cout << "THe area of Square is " << total << endl;
                    break;

                case 2:
                    total = 4 * length;
                    cout << "The perimeter of Square is " << total << endl;
                    break;
                
                default:
                    cout << "Invalid input. Terminating the program." << endl;
                    break;
            }
    }

    return 0;
}