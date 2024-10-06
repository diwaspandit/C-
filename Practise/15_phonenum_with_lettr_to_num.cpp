//Diwas Pandit
//zxh15
//October 6, 2024

#include <iostream>
#include <string>
using namespace std;

int main(){
    string phoneStr;
    unsigned int i;
    char currChar;

    cout << "Enter phone number: ";
    cin >> phoneStr;

    for (i=0; i< phoneStr.size(); i++){
        currChar = phoneStr.at(i);
        if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
                ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      else if ( ((currChar >= 'd') && (currChar <= 'f')) ||
                ((currChar >= 'D') && (currChar <= 'F')) ) {
         cout << "3";
      }
      else if ( ((currChar >= 'g') && (currChar <= 'i')) ||
                ((currChar >= 'G') && (currChar <= 'I')) ) {
         cout << "4";
      }
      else if ( ((currChar >= 'j') && (currChar <= 'l')) ||
                ((currChar >= 'J') && (currChar <= 'L')) ) {
         cout << "5";
      }
      else if ( ((currChar >= 'm') && (currChar <= 'o')) ||
                ((currChar >= 'M') && (currChar <= 'O')) ) {
         cout << "6";
      }
      else if ( ((currChar >= 'p') && (currChar <= 's')) ||
                ((currChar >= 'P') && (currChar <= 'S')) ) {
         cout << "7";
      }
      else if ( ((currChar >= 't') && (currChar <= 'v')) ||
                ((currChar >= 'T') && (currChar <= 'V')) ) {
         cout << "8";
      }
      else if ( ((currChar >= 'w') && (currChar <= 'z')) ||
                ((currChar >= 'W') && (currChar <= 'Z')) ) {
         cout << "9";
      }
      else if (currChar =='+' ) {
         cout << "0";
      }
      else {
         cout << '?';
      }
        cout << endl;
    }

    return 0;
}