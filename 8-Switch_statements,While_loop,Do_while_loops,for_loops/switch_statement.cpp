#include <iostream>

using namespace std;

int main(){
    // Switch & Case also Break
    cout << "===[What Ice cream do u want to order ?]===" << endl;
    cout << "1 - Chocolate Ice Cream" << endl;
    cout << "2 - Vannila Ice Cream" << endl;
    cout << "3 - Strawyberry Ice Cream" << endl;
    cout << "Please type the number to order: ";
    int order;
    cin >> order;
    switch (order){
        case 1: cout << "*give chocolate*" << endl; break;
        case 2: cout << "*give Vannila*" << endl;  break;
        case 3: cout << "*give Strawberry*" << endl; break;
        default: cout << "*give nothing*" << endl; break;
    }
    cout << "Thank u for choosing us" << endl;
    return 0;
}