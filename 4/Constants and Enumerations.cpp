#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){
    cout << "Days 4 of 100 Days Challange of learning code" << endl << endl;

    // Constants
    const double PI = 22 / 7;
    int radius = 10;
    float area = PI * radius * radius;
    cout << area << endl << endl << endl;

    // Enumerations & String
    enum Subscriber { A, B, C, D, E};
    string SubscriberNames[] { "Adam", "Banyu", "Cair", "Darren", "Endang" };
    Subscriber sub1 = C;
    cout << SubscriberNames[sub1] << endl;
    return 0;
    
}