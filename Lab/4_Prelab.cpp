//Diwas Pandit
//zxh15
//October 1, 2024

// PreLab 4 Assignment

// The following is an extremely scientific personality test that can predict
// how well you will do in this course.
// Fill in the area below with the requested code.

#include <iostream>

using namespace std;

int main()
{
     char ans;
     string mesz;

     cout << "Is Kirk better than Piccard? ('Y' or 'N')" << endl;
     cin >> ans;

     // equivalent switch statement.

     switch (ans){
        case 'y':
        case 'Y':
            cout << "You think Kirk is better than Piccard..."
                << endl;
            mesz = "Wrong!";
            break;

        case 'n':
        case 'N':
            cout << "You do not think think Kirk is better than Piccard..."
                << endl;
            mesz = "Correct!";
            break;
                
        default:
            mesz = "Invalid Input.";
            break;
     }

     cout << mesz << endl;

     return 0;
}
