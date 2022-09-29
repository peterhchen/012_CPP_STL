// TOPIC: Map in C++
// NOTES:
// 1. Syntax map<T1, T2> obj: where T1 is key type and T2 is value type.
// 2. std::map is associative container that store elements in key-value combination
//    where key should be unique, otherwise, it overrides the previous value.
// 3. It is important using Self-Balance BST (Binary Search Tree), either AVL or Red-Black Tree.
// 4. It stores key-value pair in sorted order on the basis of key (Ascending/Descending).
// 5. std:map is generally used in Dictionary type problem.
// EXMAPLE: Dictionary
#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

int main() {
    map<string, int> Map1;
    Map1["Peter"] = 65;
    Map1["Irene"] = 57;
    Map1["Jessica"] = 33;
    Map1["Jason"] = 30;
    Map1["Jasmine"] = 28;
    Map1.insert (make_pair("Jonathan", 22));
    cout << "e1:" << endl;
    for (auto const &e1: Map1) {
        cout << e1.first << " " << e1.second << endl;
    }
    cout << endl;
    map<string, int, greater<string>> Map2;
    Map2["Peter"] = 65;
    Map2["Irene"] = 57;
    Map2["Jessica"] = 33;
    Map2["Jason"] = 30;
    Map2["Jasmine"] = 28;
    Map2.insert (make_pair("Jonathan", 22));
    cout << "e2:" << endl;
    for (auto const &e2: Map2) {
        cout << e2.first << " " << e2.second << endl;
    }
    cout << endl;
    map<string, vector<int>, less<>> Map3;
    Map3["Peter"].push_back(65);
    Map3["Peter"].push_back(12345);
    Map3["Irene"].push_back(57);
    Map3["Irene"].push_back(56789);
    Map3["Jessica"].push_back(33);
    Map3["Jason"].push_back(30);
    Map3["Jasmine"].push_back(28);
    Map3["Jonathan"].push_back(22);
    cout << "e3:" << endl;
    for (auto const &e3: Map3) {
        cout << e3.first << " ";
        for (auto const &e5: e3.second) {
            cout << e5;
        }
        cout << endl;
    }
    return 0;
}
