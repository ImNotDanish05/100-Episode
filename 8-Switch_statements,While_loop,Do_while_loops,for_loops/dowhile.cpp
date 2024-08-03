#include <iostream>
#include <string>
#include <random>
using namespace std;

int main(){
    // While(){}
    // Do{} while()
    //
    // for (int i = 0 ; i < 10 ; i++)
    // for (int element ; number) <-- it can help u show all the string or integer on variable like number[]

    // While
    // int random1, random2, random3, random4, random5;
    // int attempt = 0;
    // while (random1 != random2 != random3 != random4 != random5){
    //     random_device randomnumber;
    //     mt19937 gen(randomnumber());
    //     uniform_int_distribution<> x(0, 9);
    //     int random1 = x(gen);
    //     int random2 = x(gen);
    //     int random3 = x(gen);
    //     int random4 = x(gen);
    //     int random5 = x(gen);
        
    //     attempt++;
    //     cout << random1 << " - " << random2 << " - " << random3 << " - " << random4 << " - " << random5 << " = ";
    //     if (random1 == random2 == random3 == random4 == random5){
    //         cout << "SAME!!" << endl;
    //     } else{
    //         cout << "Attempt: " << attempt << endl;
    //     }
    // }


    // do while
    int b;
    do {
        
        b++;
        cout << b << endl;
    } while( b < 100);


    // for (int element ; number) <-- it can help u show all the string or integer on variable like number[]
    int c[] = {1,2,24,4,3,43,4,34,35,345,4,64,6,46,45,35,42,54,54,5,435,3,4,345,245,5674,35,245,5};
    for (int d : c ){
        cout << d << endl;
    };

    for (int a ; a < 10 ; a++)

    int e;
    for (int e = 0 ; e < 10 ; e++){
        for (int f = 0 ; f < 10 ; f++){
            for (int g = 0 ; g < 10 ; g++){
                cout << e << " " << f << " " << g << endl;
            };
        };
    };
}