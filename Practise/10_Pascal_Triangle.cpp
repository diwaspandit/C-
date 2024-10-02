//Diwas Pandit
//zxh15
//October 1, 2024
//Program: Pascal Triangle

#include <iostream>
using namespace std;

//declare main function
int main(){

    const int n=5; // number of rows
    
    //create 2D array
    int coeff[n+1][n+1];

    //Fill the traingle
    for (int i=0; i <=n; ++i){
        for (int j=0; i <=i; ++j){

            if(j==0 || j ==i){
                coeff[i][j] = 1;
            } else {
                
            }
        }
    }

}