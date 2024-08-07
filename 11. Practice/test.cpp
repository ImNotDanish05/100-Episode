#include <iostream>
using namespace std;

int main(int x){
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
    // result = StartingBalance * pow(1 + (InterestRate / YTime), YTime * Time);

    // double Answer1 = (1 + (InterestRate / YTime));
    // for (int i = 0; i < YTime * Time; i++){
    //     cout << Answer1 << " -> " << i << endl; 
    //     Answer1 *= (1 + (InterestRate / YTime));
    // }
    double Answer1 = (1 + (InterestRate / YTime));
    cout << Answer1 << endl;
    for (int i = 1; i < YTime * Time; i++) {

        Answer1 *= (1 + (InterestRate / YTime));
        cout << Answer1 << " -> " << i << endl; 
    }
    
    double Result = StartingBalance * Answer1;

    
    // int i = 0 in 2 years, 0 & 1
    cout << " " << endl;
    cout << Result << endl;
    cout << Answer1 << " * " << StartingBalance << endl;
    return 0;

}