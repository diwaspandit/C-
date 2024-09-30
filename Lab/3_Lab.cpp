// Diwas Pandit, zxh15
// September 25, 2024
// CS1428 Lab
// Lab 3
// Description: This program will allow the user to play a game of Red,
// Green, Blue Squirrels against a randomized computer opponent

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  // User's choice
    int comp_num;  // Computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Red" << endl
         << " 2. Blue" << endl
         << " 3. Green" << endl
         << "Enter a number: ";
    cin >> user_num;
    cout << endl;

    // Determine if the user wins, loses, or ties (or enters invalid input):
    if (user_num < 1 || user_num > 3) {
        cout << "ERROR - Invalid Input. Terminating Program." << endl;
    } else if (user_num == comp_num) {
        if (user_num == 1) {
            cout << "You both chose Red! Its a tie!" << endl;
        } else if (user_num == 2) {
            cout << "You both chose Blue! Its a tie!" << endl;
        } else {
            cout << "You both chose Green! Its a tie!" << endl;
        }
    } else {
        
        if ((user_num == 1 && comp_num == 3) || // Red beats Green
            (user_num == 2 && comp_num == 1) || // Blue beats Red
            (user_num == 3 && comp_num == 2)) { // Green beats Blue
            if (comp_num == 1) {
                cout << "Red beats Green! You lost!" << endl;
            } else if (comp_num == 2) {
                cout << "Blue beats Red! You lost!" << endl;
            } else {
                cout << "Green beats Blue! You lost!" << endl;
            }
        } else {
            if (user_num == 1) {
                cout << "Red beats Green! You won!" << endl;
            } else if (user_num == 2) {
                cout << "Blue beats Red! You won!" << endl;
            } else {
                cout << "Green beats Blue! You won!" << endl;
            }
        }
    }
    
    return 0;
}