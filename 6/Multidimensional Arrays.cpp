#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){
    
    string lol[3][3] = {{"Nasya", "Arjuna", "Callista"}, {"Danniel" , "Udin", "Erin"}, {"Ivy", "Iqbal", "Mazna"}};
    string test = lol[0][1];
    cout << test << endl << endl;
    string lmao[2][2] = {"1", "2", "3", "4"}; // (0,0) (0,1) (1,0) (1,1)
    cout << lmao[1][0] << endl;
    return 0;

}