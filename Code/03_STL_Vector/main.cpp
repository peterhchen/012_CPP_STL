// TOPIC: std::vector
// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array list
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMEN ACCESS
// at(), [], front(), back(), data)()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(),erase(), clear()

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declarations
    vector<int> arr1;
    vector<int> arr2 (5, 20);  // size = 5, intial value = 20
    vector<int> arr3 = { 1, 2, 3, 4, 5}; // initializer list
    vector<int> arr4 {1, 2, 3, 4, 5}; // uniform initialization

    arr2[3] = 10;
    arr2.at(4) = 50;
    cout << "arr2[i]:" << endl;
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
