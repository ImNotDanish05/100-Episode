#include <iostream>

using namespace std;

int main (){
    cout << "Danish is cool" << endl << endl;
    // Array
    // If its empty, its default to be 0
    int TestScore[] = { 2084, 949384, 69}; 
    int TestScore2[3] = { 1, 2}; // The variable number 3 will be default to 0
    cout << TestScore[1] << " " << TestScore[3] << " " << TestScore2[1] << " " << TestScore[2] << " " << TestScore[3] << endl << endl;

    string SKZMember[] = { "Hyunjin","Felix","LeeKnow","BangChan","I.N","HanJiSung","KimSeungMin","Seo Chang Bin", "Woojin"};
    cout << "SKZ Before: " + SKZMember[0] << " " << SKZMember[4] << endl;
    SKZMember[4] = "Danish";
    cout << "SKZ After: " + SKZMember[0] << " " << SKZMember[4] << endl; 

    return 0;
}