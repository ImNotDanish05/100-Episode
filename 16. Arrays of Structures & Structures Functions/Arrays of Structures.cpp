#include <iostream>

using namespace std;


// For put type of data but u can put more with 1 word
struct DataPerson{
    string Username;
    double x;
    double y;
    // double x, y;
};

int main(){
    cout << "16 of 100 days series" << endl;
    DataPerson ImNotDanish05 = {"ImNotDanish05", 0.0, 0.0}; // How to put data on struct type

    // How to put data on struct type with array
    // First way
    DataPerson ServerUser[3];
    ServerUser[1].Username = "Danniel02";
    ServerUser[1].x = 93.2;
    ServerUser[1].y = 948.1;
    // DataPerson XDD.x = 233; (THIS IS NOT WORK BECAUSE IT NEED TO BE DECLARE FIRST FOR THE XDD)

    //second way
    ServerUser[2] = {"01T", 938.3, 72.3};

    for (int i = 0; i < 3; i++)
    {
        cout << ServerUser[i].Username << endl;
        cout << ServerUser[i].x << endl;
        cout << ServerUser[i].y << endl;
    }
    
    //Third way
    DataPerson RobloxUser[3] = {{"Lmao", 43,353}, {"XDD", 3434, 34}, {"HHEHE", 434,2324} };

    for (int i = 0; i < 3; i++)
    {
        cout << RobloxUser[i].Username << endl;
        cout << RobloxUser[i].x << endl;
        cout << RobloxUser[i].y << endl;
    }
    return 0;
};