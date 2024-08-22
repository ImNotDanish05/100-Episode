#include <iostream>

using namespace std;

void Screen(string Pixel[44][44]);
string WhitePixel();
string BlackPixel();

class Plane{
    string name;
    double heart;
    string model[5][5];
}

//The Screen Load;
void Screen(string Pixel[44][44]){
    const int SIZE_SCREEN = 44;
    for (int x = 0; x < SIZE_SCREEN; x++){
        for (int y = 0; y < SIZE_SCREEN; y++)
        {
            if (x < 2 || x > 41 || y < 2 || y > 41){
                Pixel[x][y] = WhitePixel();
            }
            else if (true){ // Change this later
                Pixel[x][y] = BlackPixel();
            }
            cout << Pixel[x][y];
        }
    cout << endl;
        
    }
}

//The Maps saving;
//QS = Quick Save
void MapQS(){
    const int XSIZE = 40;
    const int YSIZE = 40;
    const int XMSIZE = 200;
    const int YMSIZE = 200;
    MapSave[XSIZE][YSIZE];
}

//The Texture;
string BlackPixel(){
    return "  ";
}
string WhitePixel(){
    return "[]"; //▢
}

int main(){
    cout << "Test" << endl;
    string Test[44][44];
    Screen(Test);
    cin.ignore();
    return 0;
}