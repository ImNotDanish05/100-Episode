#include <iostream>
using namespace std;

int main(){
    // Coba kalau const itu bisa beneran tetap atau bisa berubah
    const int test01 = 10;
    // test01 = 12;
    cout << test01 << endl;

    // Const untuk dimasukin memory address harus tambah const lagi (const int* variable = &variable;)
    const double test02 = 100.0;
    const double* test03 = &test02;
    cout << test03 << endl;

    // const for memory address masih bisa berubah
    const double test04 = 10894.3;
    test03 = &test04;
    cout << test03 << endl;

    // apakah bisa nyimpen pointers tanpa pakai * (contoh: int* lmao = &bob; tapi tidak pakai *)
    const double* test05 = &test02; // You cant

    // kalau constnya untuk memory address, isi variablenya tidak constant dan bisa diubah
    const int test06 = 39473;
    const int* test07 = &test06;

    int test08 = 384938; 
    int* const test09 = &test08; // this will lock the memory address
    cout << *test09 << endl;
    *test09 = 398493;
    cout << *test09 << endl;

    const int test10 = 3947394; 
    const int* test11 = &test10; // this will lock the variable but u still can change the memory address
    cout << test11 << endl;
    test11 = &test08;
    
    cout << *test11 << endl;
    // const untuk pointers tidak bisa nullPtr

    const int* const test12 = nullptr;
    // cout << *test12 << endl;
    return 0;
}