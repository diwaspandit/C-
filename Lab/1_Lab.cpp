//Diwas Pandit, zxh15
//September 11, 2024
//CS1428 Lab
//Lab 1
//Description: this program will calculate a user's bmi

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    //Declare the variables (weight, height, bmi)
    double weight, height, BMI;

    // Prompt the user for name and store:
    cout << "What is your name?" << endl;
    cin >> name;

    //Prompt for and store the user's weight and height:
    cout << "What is your total weight (lbs.)?" << endl;
    cin >> weight;
    cout << "What is your height (inches) [1 foot = 12 inches]" << endl;
    cin >> height;

    //Calculate and assign the user's BMI to the appropriate variable:
    BMI = (weight / (height * height) * 703);

    // TODO: Display the user's BMI to the console:
    cout << name << "'s BMI is " << BMI << endl;

    // Exit the program:
    return 0;
}