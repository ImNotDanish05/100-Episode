#include <iostream>

using namespace std;


void BL(){//Beautifull Line = giving a space
    cout << " " << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << " " << endl;
}


int main(){
    cout << "xDD" << endl;
    cout << "Welcome to the Min&Max program" << endl;
    cout << "Where you can get a Maximum number and Minimum number" << endl;
    cout << "Press Enter to continue";
    cin.ignore();
    BL();
    cout << "How much number do u want to put ?" << endl;
    int Counter_Variable;
    cin >> Counter_Variable;
    int Numbers[Counter_Variable];
    BL();

    for (int i = 0 ; i < Counter_Variable ; i++){
        cout << "Number " << i << ": ";
        cin >> Numbers[i];
    }
    BL();
    int Max = Numbers[0];
    int MaxA = 0;
    int Min = Numbers[0];
    int MinA = 0;
    for (int i = 0 ; i < Counter_Variable ; i++){
        // if (i == 0){
        //     continue; // It will continue to i = 1 without doing the next program
        //     // break; will skipping all the loop
        // }
        
        if (Max < Numbers[i]){ // 23 < 7434
            
            cout << "MAXIUMUM: " << Max << " < " << Numbers[i] << " => TRUE" << endl;
            Max = Numbers[i];
            MaxA = i;
        }else{
            cout << "MAXIUMUM: " << Max << " < " << Numbers[i] << " => FALSE" << endl;
        }
        if (Min > Numbers[i]){ // 23 < 7434
            
            cout << "MINIMUM: " << Min << " > " << Numbers[i] << " => TRUE" << endl;
            Min = Numbers[i];
            MinA = i;
        }else{
            cout << "MINIMUM: " << Min << " > " << Numbers[i] << " => FALSE" << endl;
        }
    }
    BL();
    cout << "Max [" << MaxA << "] :" << Max << endl;
    cout << "Min [" << MinA << "] :" << Min << endl;
    cin.ignore();
    string NOTENTER;
    cin >> NOTENTER;
    return 0;
}