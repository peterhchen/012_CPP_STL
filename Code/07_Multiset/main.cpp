// TOPIC: std::multiset<T>
//SYNATX: std::multiset<T> objectName;

// 1. std::multiset is a Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset, then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order pf sorting while constructing set object.
// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.
#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// Example: User Defined
class Person {
  public:
    float age;
    string name;
  bool operator < (const Person& rhs) const { return age < rhs.age; }
  bool operator > (const Person& rhs) const { return age > rhs.age; }
};
int main() {
    multiset<int> multiSet1 = {5, 3, 4, 3, 2, 5};
    cout << "e1:" << endl;
    for (const auto& e1: multiSet1) {
        cout << e1 << endl;
    }
    cout << endl;
    multiset<int, less<int>> multiSet2 = {5, 3, 4, 3, 2, 5};
    cout << "e2:" << endl;
    for (const auto& e2: multiSet2) {
        cout << e2 << endl;
    }
    cout << endl;
    multiset<int, greater<int>> multiSet3 = {5, 3, 4, 3, 2, 5};
    cout << "e3:" << endl;
    for (const auto& e3: multiSet2) {
        cout << e3 << endl;
    }
    cout << endl;
    multiset<Person, greater<Person>> multiSet5 = {
        {65, "Peter"}, {57, "Irene"}, {33, "Jessica"}, {30, "Jason"},
        {28, "Jasmine"}, {22, "Jonathan"}
    };
    cout << "e5:" << endl;
    for (const auto &e5: multiSet5) {
        cout << e5.age << " " << e5.name << endl;
    }
    return 0;
}
