//Diwas Pandit
//zxh15
//October 1, 2024
//Program: Conversion Program

#include <iostream>
#include <string>
using namespace std;

//declare main function
int main(){

    // declare variables
    int randNum0_3;
    string userText;

    cout << "Tell me something about yourself." << endl;
    cout << "You can type \"Goodbye\" at anytime to quit." << endl << endl << " > ";

    getline(cin, userText);

    while (userText != "Goodbye"){
        randNum0_3 = userText.size() % 4;

        switch (randNum0_3){
            case 0:
                cout << endl << "Please explain further." << endl << endl << ">";
                break;
            case 1:
                cout << endl << "Why do you say that?" << endl << endl << "> ";
                break;
            case 2:
                cout <<  endl <<"I don't think that's right." << endl << endl << "> ";
                break;
            case 3:
                cout << endl << "What else can you share?" << endl << endl << "> ";
                break;

            default:
                cout << endl << "Uh-oh, something went wrong. Try again." << endl << endl;
                break;

        }

        getline(cin, userText);   
    }

    cout << endl << "It was nice talking with you. Goodbye!" << endl;

    return 0;
}