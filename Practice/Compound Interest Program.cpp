#include <iostream>
// #include <cmath> (For 'pow' function)
using namespace std;

double CalculateFinalAmount(int x);
double CalculatePrincipalAmount();
int BeautifullLine(int x){
    cout << " " << endl;
    cout << "====================" << endl;
    return 1;
}


int PromptValues(int AskFunction){
    switch(AskFunction){
        case 0: 
        BeautifullLine(1);
        cout << "Are you sure you want to exit ?" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Go back" << endl;
        cout << "Please type the number: " << endl;
        cin >> AskFunction; 
        if (AskFunction == 0){
            exit(0); // Automaticly leave the program
        }else if (AskFunction == 1){
            return 1;
        }else{
            cout << "There is no '" << AskFunction << "' on this function" << endl;
            PromptValues(0);
        }
        case 1: int Result; Result = CalculateFinalAmount(0); BeautifullLine(1);
        cout << "[Result]" << endl;
        cout << "Final Amount of Money: " << Result << endl;
        cout << "Press Enter to go back" << endl;
        cin.ignore();
        cin.get();
        return 1;
        case 2: break;
    }
}

double CalculateFinalAmount(int x){
    BeautifullLine(1);
    double StartingBalance;
    double InterestRate;
    int Time;
    int YTime; //How much you got IR per year
    double result;
    cout << "[Compound Interest]" << endl;
    cout << "Please write the data" << endl;
    cout << "Starting balance: ";
    cin >> StartingBalance;
    cout << "Interest Rate: ";
    cin >> InterestRate;
    cout << "Time in Year: ";
    cin >> Time;
    cout << "Compound Rate: ";
    cin >> YTime;
    double Answer1 = 1 + (InterestRate / YTime);
    for (int i = 1; i < YTime * Time;){
        Answer1 = Answer1 * Answer1;
    }
    // result = StartingBalance * pow(1 + (InterestRate / YTime), YTime * Time);
    return result;

}
double CalculatePrincipalAmount(){}



int main(){
    int Result;
    do{
    BeautifullLine(1);
    cout << "Hello! Welcome to the Skibidi Bank" << endl;
    cout << "List of the function: " << endl;
    cout << "1. Find Compound Interest" << endl;
    cout << "2. Find Principal Amount" << endl;
    cout << "0. Exit" << endl;
    cout << "Write the number to run the function: ";
    int AskFunction;
    cin >> AskFunction;
    
    Result = PromptValues(AskFunction);
    } while (Result == 1);
    cout << "Thank you for" << endl;
    // return 0;
}