#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void Screen(string Pixel[44][44], string control, int XCOR, int YCOR);
string WhitePixel();
string BlackPixel();
string ObjekPixel();
bool ExploitOutCoord(int x, int y);

class Plane{
    public:
    string name;
    double heart;
    int x;
    int y;
    string model[5][5] = {
        {BlackPixel(), BlackPixel(), ObjekPixel(), BlackPixel(), BlackPixel()}, //     []
        {ObjekPixel(), ObjekPixel(), ObjekPixel(), ObjekPixel(), ObjekPixel()}, // [][][][][]
        {BlackPixel(), BlackPixel(), ObjekPixel(), BlackPixel(), BlackPixel()}, //     []
        {BlackPixel(), BlackPixel(), ObjekPixel(), BlackPixel(), BlackPixel()}, //     []
        {BlackPixel(), ObjekPixel(), BlackPixel(), ObjekPixel(), BlackPixel()}  //   []  []

    };
};

class Rules{
    public:
    const int SIZE_SCREEN = 44;
    const int SIZE_PLANE = 5;
    const int SIZE_LINESCREEN = 2;
    const int SIZE_AROUNDPLANE = 2;
};

//The Screen Load;
void Screen(string Pixel[44][44], char control, int XCOR, int YCOR){
    Rules RulesS;
    const int SIZE_SCREEN = RulesS.SIZE_SCREEN;
    const int SIZE_PLANE = RulesS.SIZE_PLANE;
    const int SIZE_LINESCREEN = RulesS.SIZE_LINESCREEN;
    const int SIZE_AROUNDPLANE = RulesS.SIZE_AROUNDPLANE;
    const int SIZE_OUTBOX = SIZE_LINESCREEN + SIZE_AROUNDPLANE;

    // const int SIZE_LINESCREEN = 2;
    // const int SIZE_AROUNDPLANE = 2;
    // // If the plane is trying to go out from the screen
    // if (YCOR > SIZE_SCREEN - SIZE_LINESCREEN - SIZE_AROUNDPLANE){
    //     YCOR = SIZE_SCREEN - SIZE_LINESCREEN - SIZE_AROUNDPLANE;
    // }
    // if (YCOR < SIZE_LINESCREEN + SIZE_AROUNDPLANE){
    //     YCOR = SIZE_LINESCREEN + SIZE_AROUNDPLANE;
    // }
    // if (XCOR > SIZE_SCREEN - SIZE_LINESCREEN - SIZE_AROUNDPLANE){
    //     XCOR = SIZE_SCREEN - SIZE_LINESCREEN - SIZE_AROUNDPLANE;
    // }
    // if (XCOR < SIZE_LINESCREEN + SIZE_AROUNDPLANE){
    //     XCOR = SIZE_LINESCREEN + SIZE_AROUNDPLANE;
    // }


    //The screen of the game
    Plane User;
    string GScreen; // the screen of the game
    for (int i = 0 ; i < SIZE_PLANE ; i++){
        for (int j = 0 ; j < SIZE_PLANE ; j++){
            Pixel[i + XCOR - 2][j + YCOR - 2] = User.model[i][j];
        }
    }
    for (int x = 0; x < SIZE_SCREEN; x++){
        for (int y = 0; y < SIZE_SCREEN; y++)
        {
            if (x < 2 || x > 41 || y < 2 || y > 41 || Pixel[x][y] == ObjekPixel()){
                Pixel[x][y] = WhitePixel();
            }
            else if (true){ // Change this later
                Pixel[x][y] = BlackPixel();
            }
            GScreen = GScreen + Pixel[x][y];
        }
    GScreen = GScreen + "\n";
        
    }
    cout << GScreen;
}



//The Maps saving;
//QS = Quick Save
void MapQS(){
    const int XSIZE = 40;
    const int YSIZE = 40;
    const int XMSIZE = 200;
    const int YMSIZE = 200;
    int MapSave[XSIZE][YSIZE];
}

//The Texture;
string BlackPixel(){
    return "  ";
}
string WhitePixel(){
    return "[]"; //▢
}
string ObjekPixel(){
    return "*";
}

//Plane try to go outside of the box
bool ExploitOutCoord(int x, int y){
    Rules ExploitR;
    // const int SIZE_SCREEN = 44;
    // const int SIZE_PLANE = 5;
    // const int SIZE_LINESCREEN = 2;
    // const int SIZE_AROUNDPLANE = 2;
    bool result = true;
    if (x < ExploitR.SIZE_AROUNDPLANE + ExploitR.SIZE_LINESCREEN){ // We allow 4
        x = ExploitR.SIZE_AROUNDPLANE + ExploitR.SIZE_LINESCREEN;
        result = false;
    }
    if (y < ExploitR.SIZE_AROUNDPLANE + ExploitR.SIZE_LINESCREEN){
        y = ExploitR.SIZE_AROUNDPLANE + ExploitR.SIZE_LINESCREEN;
        result = false;
    }
    //We allow 40
    //If under 40, it still let move
    //Higher than 40, dont move
    if (x > ExploitR.SIZE_SCREEN - ExploitR.SIZE_AROUNDPLANE - ExploitR.SIZE_LINESCREEN){ //We allow 40
        x = ExploitR.SIZE_SCREEN - ExploitR.SIZE_AROUNDPLANE - ExploitR.SIZE_LINESCREEN;
        result = false;
    }
    if (y > ExploitR.SIZE_SCREEN - ExploitR.SIZE_AROUNDPLANE - ExploitR.SIZE_LINESCREEN){ //We allow 40
        y = ExploitR.SIZE_SCREEN - ExploitR.SIZE_AROUNDPLANE - ExploitR.SIZE_LINESCREEN;
        result = false;
    }
    return result;

}

int main(){
    string Test[44][44];
    Plane MC;
    MC.heart = 20;
    MC.x = 22;
    MC.y = 22;
    int XCOR, YCOR;
    Rules RulesS;
    const int SIZE_SCREEN = RulesS.SIZE_SCREEN;
    const int SIZE_PLANE = RulesS.SIZE_PLANE;
    const int SIZE_LINESCREEN = RulesS.SIZE_LINESCREEN;
    const int SIZE_AROUNDPLANE = RulesS.SIZE_AROUNDPLANE;
    const int SIZE_OUTBOX = SIZE_LINESCREEN + SIZE_AROUNDPLANE;
    Screen(Test, 'N', MC.x, MC.y);
    while (true) {
        // XCOR = MC.x;
        // YCOR = MC.y;
        // if (MC.x < SIZE_OUTBOX) MC.x = SIZE_OUTBOX;
        // if (MC.x > SIZE_SCREEN - SIZE_OUTBOX) MC.x = SIZE_SCREEN - SIZE_OUTBOX;
        // if (MC.y < SIZE_OUTBOX) MC.y = SIZE_OUTBOX;
        // if (MC.y > SIZE_SCREEN - SIZE_OUTBOX) MC.y = SIZE_SCREEN - SIZE_OUTBOX;
        bool keyPressed = false;
        if (GetAsyncKeyState('W') & 0x8000) {
            MC.x--;
            if (MC.x < SIZE_OUTBOX) MC.x = SIZE_OUTBOX;
            Screen(Test, 'w', MC.x, MC.y);
            keyPressed = true;
        }
        if (GetAsyncKeyState('A') & 0x8000) {
            MC.y--;
            if (MC.y < SIZE_OUTBOX) MC.y = SIZE_OUTBOX;
            Screen(Test, 'a', MC.x, MC.y);
            keyPressed = true;
        }
        if (GetAsyncKeyState('S') & 0x8000) {
            MC.x++;
            if (MC.x > SIZE_SCREEN - SIZE_OUTBOX - 1) MC.x = SIZE_SCREEN - SIZE_OUTBOX - 1;
            Screen(Test, 's', MC.x, MC.y);
            keyPressed = true;
        }
        if (GetAsyncKeyState('D') & 0x8000) {
            MC.y++;
            if (MC.y > SIZE_SCREEN - SIZE_OUTBOX - 1) MC.y = SIZE_SCREEN - SIZE_OUTBOX - 1;
            Screen(Test, 'd', MC.x, MC.y);
            keyPressed = true;
        }
        if (GetAsyncKeyState('Q') & 0x8000) {  // Exit on pressing 'q'
            break;
        }
        //Turn it on only if u want to have image repeatly
        // if (!keyPressed){
        //     Screen(Test, 'N', MC.x, MC.y);
        // }
        Sleep(100);
    }
    // do{
    // Screen(Test, Move);
    // } while(true);
    // cin.ignore();
    // return 0;
    return 0;
}
    
