#include <iostream>
#include <string>

using namespace std;

struct Character
{
    string Name;
    int Age;
    string Description;
};

void CreatePlayer(Character* Player){
    cout << "Create new Character" << endl;
    cout << "What's your character's name ?" << endl;
    cin >> Player->Name;
    cout << "Your character's name is: " << Player->Name << endl;
    cout << "How old is ur character: " << endl;
    cin >> Player->Age;
    cout << "Your character's age is: " << Player->Age << endl;
    cin.ignore();
    cout << "Describe ur character: " << endl;
    getline(cin, Player->Description);
    Character* PlayerPtr = Player;
    cout << PlayerPtr->Name << endl;
    cout << PlayerPtr->Age << endl;
    cout << PlayerPtr->Description << endl;
    
}

int main(){
    cout << "xDD" << endl;
    Character ImNotDanish05 = {"Danish Tanaka", 18, "Strong Man with Muscle, i hope"};
    Character* PlayerPtr = &ImNotDanish05;
    
    // How to check Ptr
    cout << PlayerPtr << endl;
    cout << PlayerPtr + 1 << endl;
    cout << PlayerPtr + 2 << endl;
    cout << " " << endl;

    // How to check the variable
    cout << PlayerPtr->Name << endl;
    cout << PlayerPtr->Age << endl;
    cout << PlayerPtr->Description << endl;
    cout << " " << endl;

    //How to change the pointers variable
    PlayerPtr->Name = "Hiroki Danish Tanaka";
    PlayerPtr->Age = 15;
    PlayerPtr->Description = "OP Person";
    cout << PlayerPtr->Name << endl;
    cout << PlayerPtr->Age << endl;
    cout << PlayerPtr->Description << endl;
    cout << " " << endl;

    CreatePlayer(PlayerPtr);
    return 0;
}