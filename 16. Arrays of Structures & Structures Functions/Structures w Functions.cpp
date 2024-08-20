#include <iostream>

using namespace std;

struct Lmao
{
    string username;
    int x,y,z;
};

void Output(Lmao Players){
    cout << "Name: " << Players.username << endl;
    cout << "Coordinat: " << Players.x << ", " << Players.y << ", " << Players.z << endl;
}

Lmao ChangeCoordinat(string &UName, int x, int y, int z){
    Lmao xD;
    xD.username = UName;
    xD.x = x;
    xD.y = y;
    xD.z = z;
    return xD;
}


int main(){
    cout << " LMAO " << endl;
    Lmao Minecraft[4] = {{"ImNotDanish05", 343, 34,124}};
    Output({"Test", 3434, 4134, 3434});
    Output(Minecraft[0]);
    cout << Minecraft[0].username << endl;
    cout << Minecraft[0].x << endl;
    cout << Minecraft[0].y << endl;
    cout << Minecraft[0].z << endl;
    cout << " " << endl;
    Minecraft[0] = {Minecraft[0].username, Minecraft[0].x, Minecraft[0].y, Minecraft[0].z};
    cout << Minecraft[0].username << endl;
    cout << Minecraft[0].x << endl;
    cout << Minecraft[0].y << endl;
    cout << Minecraft[0].z << endl;
    cout << " " << endl;
    string UName;
    UName = "Danish05";
    Minecraft[0] = ChangeCoordinat(UName, 343, 343, 3431);
    cout << Minecraft[0].username << endl;
    cout << Minecraft[0].x << endl;
    cout << Minecraft[0].y << endl;
    cout << Minecraft[0].z << endl;
    cout << " " << endl;
    // cout << ChangeCoordinat();
    return 0;
}