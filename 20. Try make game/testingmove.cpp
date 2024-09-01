#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void moveCharacter(char direction) {
    switch(direction) {
        case 'w':
            cout << "Move Up" << endl;
            break;
        case 'a':
            cout << "Move Left" << endl;
            break;
        case 's':
            cout << "Move Down" << endl;
            break;
        case 'd':
            cout << "Move Right" << endl;
            break;
        default:
            break;
    }
}

int main() {
    cout << "Use WASD keys to move the character. Press 'q' to quit." << endl;

    while (true) {
        bool keyPressed = false;
        if (GetAsyncKeyState('W') & 0x8000) {
            moveCharacter('W');
            keyPressed = true;
        }
        if (GetAsyncKeyState('A') & 0x8000) {
            moveCharacter('a');
            keyPressed = true;
        }
        if (GetAsyncKeyState('S') & 0x8000) {
            moveCharacter('s');
            keyPressed = true;
        }
        if (GetAsyncKeyState('D') & 0x8000) {
            moveCharacter('d');
            keyPressed = true;
        }
        if (GetAsyncKeyState('Q') & 0x8000) {  // Exit on pressing 'q'
            break;
        }
        if (!keyPressed){
            moveCharacter('N');
        }
        Sleep(100);
    }

    return 0;
}
