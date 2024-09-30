//Diwas Pandit
//zxh15
//September 29, 2024
//Program: Adding a period to a caption if no punctuation

#include <iostream>
#include <string>
using namespace std;

//declare main function
int main(){

    //declare variables
    string userCaption;
    char lastChar;
    int lastIndex;

    // get user caption
    cout << "Enter a caption: ";
    getline(cin, userCaption);

    // get last character
    lastIndex = userCaption.size() - 1;
    lastChar = userCaption.at(lastIndex);

    if ((lastChar != '.') && (lastChar != '!') && (lastChar != '?')){
        userCaption.append(".");
    }

    cout << "New: ";
    cout << userCaption << endl;

    return 0;

} 