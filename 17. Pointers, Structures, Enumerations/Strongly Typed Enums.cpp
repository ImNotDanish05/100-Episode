#include <iostream>

using namespace std;

enum Cutie{Aria, Lucy, Kai, Kez, Melody};

int main(){
    cout << "I LOVE EVERYONE" << endl;
    enum Test{Hi,Hallo,Good,Bad} Test1 = Hi, Test2 = static_cast<Test>(1), Test3, Test4;
    Test3 = Good;
    cout << Test1 << endl;
    cout << Test2 << endl;
    cout << Test3 << endl; cout << Test4 << endl;

    // If there is a const, all of it automaticly to be const
    enum Exper{XD,X3,IP,UwU} const Exper1 = XD, Exper2 = X3;
    // Exper2 = X3; (Exper2 is automaticly const)
    cout << Exper1 << endl;
    cout << Exper2 << endl;
    
    // Outside function still work
    cout << Aria << endl;

    // If there is same variable name, u need to put 'class'
    enum class Class1{Danish, Daniel, Zero, Naufal, Reza, Reynard};
    enum class FavoriteClass{Danish, Random1, Random2};
    cout << static_cast<int>(Class1::Danish) << endl;
    // cout << Class1::Daniel << endl; (THIS 2 LINE NOT GONNA WORK)
    // cout << FavoriteClass::Danish << endl;
    // FavoriteClass Test = Class1::Zero; (You cant also put different between classes and variable type)
    Class1 Test = Class1::Zero;
    // int Test = Class1::Zero (This one wont work too)
    // cout << Test << endl; (This one not gonna work too!)
    cout << static_cast<int>(Test) << endl;
    return 0;
}