#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    cout << "XD" << endl;
    // ofstream FileTest;
    // FileTest.open( "C:\\Users\\danis\\OneDrive\\College\\C++\\100 Episode\\12. Static Local Function Variables, Basic File Streams & Vectors\\Test.txt");
    // for (int i = 0 ; i < 10000 ; i++){
    //     FileTest << "Number: " << i << endl;
    // }
    // FileTest.close();
    
    // ifstream InputFile;
    // string lol;
    // InputFile.open("C:\\Users\\danis\\OneDrive\\College\\C++\\100 Episode\\12. Static Local Function Variables, Basic File Streams & Vectors\\Test.txt");
    // for (int i = 0 ; i < 10000 ; i++){
    //     InputFile >> lol;
    //     cout << lol << endl;
    // }
    // InputFile.close();

    ifstream InputFile;
    ofstream OutputFile;
    string Testing = "NewTxt.txt";
    InputFile.open("C:\\Users\\danis\\OneDrive\\College\\C++\\100 Episode\\12. Static Local Function Variables, Basic File Streams & Vectors\\Test.txt");
    OutputFile.open("C:\\Users\\danis\\OneDrive\\College\\C++\\100 Episode\\12. Static Local Function Variables, Basic File Streams & Vectors\\" + Testing);

    // string data;
    // // InputFile = Untuk memasukan data dari file ke variable
    // // OutputFile = Untuk mengeluarkan data dari variable ke file, bukan ke konsole
    // while (InputFile >> data){
    //     OutputFile << data << endl;
    // }

    string input;
    while (getline(InputFile, input)){
        OutputFile << input << endl;
        cout << input << endl;
    }

    InputFile.close();
    OutputFile.close();
    return 0;
}