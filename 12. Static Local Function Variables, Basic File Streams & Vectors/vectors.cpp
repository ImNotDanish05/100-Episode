#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // Vector like arrays but the size value can be edited
    // Array: Value[5] = {1,2,3,4,5,6}
    // Vector: vector<int> Value(HowMuchValue, What_is_it_on_each_value)

    // Array can't do copy to other array. Its possible but it need to use loop and one by one
    int TestArray[3] = {1,2,3};
    // int TestCopyArray[TestArray];


    // Vectors can copy datafile from variable easily by putting the variable on the () thing.
    vector<int> TestData(2, 5);

    TestData.push_back(3); // Push back is for making the size of the vector way bigger
    TestData[2] = 3;
    for(int i = 0 ; i < TestData.size(); i++){
        TestData[i] = TestData[i] * 2;
        cout << TestData[i] << endl;
    }
    cout << "This size have" << TestData.size() << endl;
    cout << "==================" << endl;
    vector<int> TestData2 {1 , 3, 3, 5};
    cout << TestData[1] << endl;
    vector<int> TestCopy(TestData);
    cout << TestCopy[0] << endl;
    cout << TestCopy[2] << endl;

    // There is 2 way how to access the Vectors
    cout << TestCopy.at(0) << endl;// 1 Way
    cout << TestCopy[0] << endl; //2 way

    cout << TestData.size() << endl;
    for(int i = 0 ; i < TestData2.size(); i++){
        TestData2[i] = TestData2[i] * 2;
        cout << TestData2[i] << endl;
    }
    cout << sizeof(TestArray) << endl;

    // This can resize back from normal
    cout << "=================" << endl;
    vector<int> TestLmao{2,345,24,35,24};
    cout << TestLmao.size() << endl;
    TestLmao.push_back(19); // This one will add 1 more stock and add 19 as the variable int
    cout << TestLmao.size() << endl;
    cout << TestLmao[5] << endl;
    cout << TestLmao[6] << endl;
    TestLmao.push_back(19);
    TestLmao.pop_back(); // Remove 1 stock
    cout << TestLmao.size() << endl;
    TestLmao.clear(); // clear all the variable on vector
    cout << TestLmao.size() << endl;

    cout << TestLmao.empty() << endl; // it will turn 1 because its true (so basically this is true false)
    
    // This is for just fun, i always forgot how to remember this function

    
    int numbersx[] = {0, 1, 2, 3, 4};
    for (int x : numbersx) {
    cout << x << endl;
    }
    vector<int> numbersy = {0, 1, 2, 3, 4};

    for (int x : numbersy) {
    cout << x << endl;
    }

    return 0;
}