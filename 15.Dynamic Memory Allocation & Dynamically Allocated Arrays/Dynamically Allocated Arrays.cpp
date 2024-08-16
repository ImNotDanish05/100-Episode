#include <iostream>

using namespace std;

int main(){
    // First thing, i just wanna test if array must using const number or not, but in reality u can use without const
    const int size = 5; // RECOMENDED USING CONST, without it still work, but may have a high chance to error
    // size++;
    int array[size] = {1,34,343,3345,3345,3534,23434334};
    cout << array[6] << endl;

    // Dynamic Allocation for arrays

    int* pointers = new int[5];
    cout << sizeof(*pointers) << endl;
    pointers[4] = 30843; // For no reason this work even out of arrays, BUT NOT RECOMENDED TO DO THAT!! (i put it 6 before but i change it to 4 because the "delete" is broken if out of arrays)
    cout << sizeof(*pointers) << endl;
    cout << pointers[4] << endl;


    pointers[0] = 3434;
    pointers[1] = 3435434;
    pointers[2] = 334;
    pointers[3] = 34;
    for (int i = 0 ; i < 10 ; i++){
        cout << pointers[i] << endl;
    }
    delete [] pointers; //ON SECOND THOUGH! YES, NEVER PUT ARRAY OUT OF ARRAY, OR THIS WONT WORK!!
    // You can also delete array without []
    // delete pointers;
    cout << pointers[4] << endl;
    for (int i = 0 ; i < 10 ; i++){ // Its still register as variable or pointers even u already delete it
        cout << pointers + i << endl;
        cout << pointers[i] << endl;
    }


    return 0;
}