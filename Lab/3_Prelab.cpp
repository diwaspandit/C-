//Diwas Pandit
//zxh15
//09/24/2024

// PreLab 3 Assignment

// The following is a simple dice roller for a table top game.
// The code to randomly generate a number is provided.
// Don't worry about fully understanding the provided code
// as you will not be tested over it.

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

        int number;

        // seeds rand (needed for getting random numbers)
        srand(time(NULL));

        // randomly generates a number 1 - 10 inclusively
        number = rand() % 10 + 1;

        cout << "You roll a " << number << ": ";


        // ADD HERE - write an IF statement that prints "CRITICAL HIT!!"
        // if the user rolls a 10
        if (number == 10){
            cout << "CRITICAL HIT!!" << endl;
        }


        // ADD HERE - write an ELSE IF statement that prints "Attack Strikes"
        // if the user rolls an 8 or 9.
        else if (number == 8 || number == 9){
            cout << "Attack Strikes" << endl;
        }

        // ADD HERE - write an ELSE statement that prints "Attack Misses"
        // for any other roll
        else {
            cout << "Attack Misses" << endl;
        }

    return 0;
}
