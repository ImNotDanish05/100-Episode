#include <iostream>

using namespace std;

int main(){
    cout << "Days 3 Challange 100 days of learning how to code" << endl << endl;

    // Sizeoff
    short DanishIsCoolPleaseSubscribe = 83835837;
    cout << sizeof(int) << endl;
    cout << sizeof(DanishIsCoolPleaseSubscribe) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;

    // Auto
    auto xDD = true;
    auto yDD = 5.9493849393849384938943849938;
    auto zDD = 348347892657642596249586894586458964852853435;
//    cout << xDD << endl << yDD << endl << zDD << endl;
    cout << sizeof(xDD) << endl << sizeof(yDD) << endl << sizeof(zDD) << endl;

    //typedef
    unsigned long long A = 8374837483847384738748347;
    unsigned long long B = 837483748384738473874834739434973473433;

    cout << A << " " << B << endl << endl;
    typedef unsigned long long LMAOO;
    LMAOO xdd = 8374837483847384738748347;
    LMAOO ydd = 837483748384738473874834739434973473433;
    cout << xdd << " " << ydd << endl << endl;
    return 0;
}