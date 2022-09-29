// Topic: std::array
// Syntax: std::array<T, N> array;
// Notice:
// 1. std:array is a container that encapsulates fixed size arrays.
// 2. arraysize is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at()
//    b. []
//    c. back()
//    d. data() //gives access to the underlying array

#include <iostream>
#include <array>
using namespace std;

int main() {
    // Declare
    array<int, 5> myarray1;
    cout << "myarray1[i]:" << endl;
    for (int i = 0; i < myarray1.size(); i++) {
        cout << myarray1[i] << " ";
    }
    cout << endl << "myarray5.at(i):" << endl;
    for (int i = 0; i < myarray1.size(); i++) {
        cout << myarray1.at(i) << " ";
    }
    cout << endl << endl;
    // Initialization
    array<int, 5> myarray2 = {1, 2, 3, 4, 5}; // initialize list
    cout << "myarray2[i]:" << endl;
    for (int i = 0; i < myarray2.size(); i++) {
        cout << myarray2[i] << " ";
    }
    cout << endl << "myarray2.at(i):" << endl;
    for (int i = 0; i < myarray2.size(); i++) {
        cout << myarray2.at(i) << " " ;
    }
    cout << endl << endl;

    array<int, 5> myarray3 {1, 2, 3, 4, 5}; // uniform initialization
    cout << "myarray3[i]:" << endl;
    for (int i = 0; i < myarray3.size(); i++) {
        cout << myarray3[i] << " ";
    }
    cout << endl << "myarray3.at(i):" << endl;
    for (int i = 0; i < myarray2.size(); i++) {
        cout << myarray3.at(i) << " ";
    }
    cout << endl << endl;
    // Assign using initializer list
    array<int, 5> myarray5;
    myarray5 = {1, 2, 3, 4, 5};
    cout << "myarray5[i]:" << endl;
    for (int i = 0; i < myarray2.size(); i++) {
        cout << myarray5[i] << " ";
    }
    cout << endl << "myarray5.at(i):" << endl;
    for (int i = 0; i < myarray2.size(); i++) {
        cout << myarray5.at(i) << " ";
    }
    cout << endl;
    return 0;
}
