#include <iostream>

using namespace std;

int main(){
    cout << "Work" << endl;

    enum Teletubis{Twinky = 82,Dipsi = 724,Lala,Poo}; // Lala and poo will get 725 and 726 so its arithmetic
    // Enum is like constant so you cant change the number like what constant do (const)
    cout << Twinky << endl;
    int Integer;
    Integer = Dipsi;
    cout << Integer << endl;
    Integer = static_cast<Teletubis>(725);
    cout << Integer << endl;
    Teletubis Integer2;
    Integer2 = Dipsi;
    cout << Integer2 << endl;
    Integer2 = static_cast<Teletubis>(725);
    cout << Integer2 << endl;

    // Dipsi++; (You cant math with that)

    enum AgeLegally{Under = 18, Top = 30};

    int Age;
    cout << "Welcome to the chill talk cafe, pleaes provide your age: ";
    cin >> Age;
    if (Age < Under){
        cout << "You are too young to be in here, get out!" << endl;
    }else if(Age > Top){
        cout << "Too old too, get out!!" << endl;
    }else{
        cout << "Welcome mabooy" << endl;
    }
    return 0;
}