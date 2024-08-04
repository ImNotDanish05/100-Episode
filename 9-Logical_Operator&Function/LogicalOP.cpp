#include <iostream>

using namespace std;

// !(variable) - opposite of the conditiion true or false. if !true = false, if !false = true
// && - AND - 2 variables must be true to run the line
// || - OR - one of the variables must be true to run the line


int main(){
    cout << "Work" << endl;
    // !
    bool a = true;
    if (!a){
        cout << "If condition is working" << endl;
    }
    int b = 10000;
    if (!b < 1000){
        cout << "! thing is working" << endl;
    }

    //
    // &&
    //
    int c, d;
    printf("Please write 2 number: ");
    cin >> c >> d;
    if (c < 100 && d > 100){
        cout << "C is under 100 and d is higher than 100"<< endl;
    } else{
        cout << "c and d is not follow the requirement" << endl << endl;
        }
    
    //
    // ||
    //

    bool Danniel, Zero;
    cin >> Danniel >> Zero; // You can use true/false or 1/0 or u can also use 2 different thiing at the same time like true and 0 for example

    if (Danniel || Zero){
        cout << "One of them is met the requirement" << endl;
    } else{ cout << "Nah" << endl;}
    return 0;

    
}