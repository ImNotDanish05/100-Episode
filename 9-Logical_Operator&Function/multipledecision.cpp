#include <iostream>
using namespace std;

int main(){
    //
    // Multiple Condition
    //

    bool x, y, z;
    printf("Please type 1/0 or true/false: ");
    cin >> x >> y >> z;
    if ((x || y) && z){
        cout << "Danish is cool LMAO" << endl;
    } else{cout << "Dont care Danish still cool" << endl;}
}