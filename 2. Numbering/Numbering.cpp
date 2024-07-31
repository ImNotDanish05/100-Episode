#include <iostream>

using namespace std;
int main() {
    short int a = 65535; // Max = 32767
    unsigned short int b = 65536; // Max = 65535
    cout << "Short Integer & Unsigned Short Integer" << endl;
    cout << a << endl;
    cout << b << endl << endl;

    int c = 4294967296;  // Max = 32767
    unsigned int d = 4294967296; //Max = 65535
    cout << "Integer and Unsigned Integer" << endl;
    cout << c << endl;
    cout << d << endl << endl;

    long int e = 4294967295 ; // Max = 2147483647
    unsigned long int f = 4294967296; // Max = 4294967295 
    cout << "Long Integer" << endl;
    cout << e << endl;
    cout << f << endl << endl;

    long long int g = 18446744073709551615; // Max = 9223372036854775807
    unsigned long long int h = 18446744073709551616; // Max = 18446744073709551615
    cout << "Long Long Integer" << endl;
    cout << g << endl;
    cout << h << endl << endl;
    return 0;
}
