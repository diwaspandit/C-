//Diwas Pandit
//zxh15
//October 6, 2024
//Program that finds a meal based on the user's input

#include <iostream>
using namespace std;

int main(){
    const int EMPANDA_COST = 3;
    const int TACO_COST =4;

    int userMoney;
    int numTacos;
    int numEmpandas;
    int mealCost;
    int maxEmpandas;
    int maxTacos;
    int numOptions;
    int numDiners;

    mealCost = 0;
    numOptions = 0;

    cout << "Enter money for meal: ";
    cin >> userMoney;

    cout << "How many people for meal: ";
    cin >> numDiners;

    maxEmpandas = userMoney / EMPANDA_COST;
    maxTacos = userMoney / TACO_COST;

    for (numTacos = 0; numTacos <= maxTacos; ++numTacos){
        for (numEmpandas =0; numEmpandas <= maxEmpandas; ++numEmpandas){

            if (((numTacos + numEmpandas) % numDiners) !=0){
                continue;
            }

            mealCost = (numEmpandas * EMPANDA_COST)+ (numTacos * TACO_COST);

            if (mealCost == userMoney){
                cout << "$ " << mealCost << " buys " << numEmpandas
                << " empanadas and " << numTacos << " tacos without change." << endl;
                numOptions +=1;
            }
        }

    }

    if (numOptions == 0){
        cout << "You cannot buy a meal without "
        << "having change left over." << endl;
    }

    return 0;
}