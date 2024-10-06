//Diwas Pandit
//zxh15

//Program: Counting Letters

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


// delcare main function
int main(){
    string inputWord;
    int numLetters;

    cout << "Enter a word: ";
    cin >> inputWord;

    numLetters = 0;
    for (int i=0; i < inputWord.size(); ++i){
        if(isalpha(inputWord.at(i))) {
            numLetters += 1;
        }
    }

    cout << "Number of letters: " << numLetters << endl;

    return 0;
}