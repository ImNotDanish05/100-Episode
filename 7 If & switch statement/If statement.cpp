#include <iostream>
#include <string>
#include <random>

// if statement
// else statement
// else if statement

//
// Legal loterry from age
//

int main (){
    // using namespace std;
    std::cout << "MrBeast Chocolate Feastable!" << std::endl;

    using namespace std;
    cout << "Welcome! you scan our barcode from Feastable that you are buying to HAVE A CHANCE TO WIN LAMBORGINI!!!!" << endl;

    // If statement

    string username;
    string agev;
    cout << "Please write your name: ";
    getline(cin, username);
    cout << "Your name is on our list, " << username << ". Lets go to the next question" << endl;
    cout << "Are you under 18 ?" << endl;
    cout << "Type Y for Yes" << endl << "Type N for No" << endl;
    cin >> agev;
    if (agev == "Y"){
        cout << "You are not allowed to join MrBeast Loterry. Please wait until u are legal to not get scam from us" << endl;
        return 0;
    }
    else{
        cout << "Okay you are legal, you can join our MrBeast Loterry to win Lamborgini" << endl;
        cout << "Please press ENTER if you want to start spinning" << endl;
        cin.ignore();
        cin.get();
        random_device randomnumber;
        mt19937 gen(randomnumber());
        uniform_int_distribution<> x(1, 10);
        int random1 = x(gen);
        int random2 = x(gen);
        int random3 = x(gen);

        cout << random1 << " " << random2 << " " << random3 << endl;
        cout << "Noo, you lose. Dont worry, you can buy more Chocolate to have a high chance to win!" << endl;
        cin >> agev;
        return 0;
    }

    return 0;
}