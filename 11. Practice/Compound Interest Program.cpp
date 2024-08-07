#include <iostream>
#include <cmath>
using namespace std;

double CalculateFinalAmount(int x);
double CalculatePrincipalAmount(int x);
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
        double Result;
        case 1:
        Result = CalculateFinalAmount(0);
        BeautifullLine(1);
        cout << "[Result]" << endl;
        cout << "Final Amount of Money: " << Result << endl;
        cout << "Press Enter to go back" << endl;
        cin.ignore();
        cin.get();
        return 1;
        case 2:
        
        Result = CalculatePrincipalAmount(0);
        BeautifullLine(1);
        cout << "[Result]" << endl;
        cout << "Principal Amount of Money: " << Result << endl;
        cout << "Press Enter to go back" << endl;
        cin.ignore();
        cin.get();
        return 1;
        default: 
        cout << "There is no '" << AskFunction << "' on this function" << endl;
        return 1;
    }
}

double CalculateFinalAmount(int x){
    BeautifullLine(1);
    double StartingBalance;
    double InterestRate;
    int Time;
    int YTime; //How much you got IR per year
    // double Result;
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
    double Result = StartingBalance * pow(1 + (InterestRate / YTime), YTime * Time);

    // double Answer1 = (1 + (InterestRate / YTime));
    // for (int i = 1; i < YTime * Time; i++){
    //     Answer1 *= (1 + (InterestRate / YTime));
    // }
    // double Result = StartingBalance * Answer1;

    // double Answer1 = (1 + (InterestRate / YTime));
    // cout << Answer1 << endl;
    // for (int i = 1; i < YTime * Time; i++) {

    //     Answer1 *= (1 + (InterestRate / YTime));
    //     cout << Answer1 << " -> " << i << endl; 
    // }
    // double Result = StartingBalance * Answer1;
    // cout << " " << endl;
    // cout << Result << endl;
    // cout << Answer1 << " * " << StartingBalance << endl;
    // int i = 0 in 2 years, 0 & 1

    return Result;

}
double CalculatePrincipalAmount(int x){
    BeautifullLine(1);
    double FinalCompound;
    double InterestRate;
    int Time;
    int YTime; //How much you got IR per year
    // double Result;
    // We try to find Starter Balance
    cout << "[Principal Amount]" << endl;
    cout << "Please write the data" << endl;
    cout << "Final Compound: ";
    cin >> FinalCompound;
    cout << "Interest Rate: ";
    cin >> InterestRate;
    cout << "Time in Year: ";
    cin >> Time;
    cout << "Compound Rate: ";
    cin >> YTime;
    // Principal = Amount / (1+(r/n))^nt
    double Result = FinalCompound / pow(1 + (InterestRate/YTime), YTime * Time);
    cout << Result << endl;
    return Result;

}


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