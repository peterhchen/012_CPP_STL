// TOPIC: std::set<T>
// SYNATX: std:set<T> objectName;
// 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity,'
// 4. If we want to store user defined data int set then we will have to provide
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing st object.

// Bottom Line:
// It stores unique elements and they are sorted in sorted order (A/D)
#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
class Person {
  public:
    float age;
    string name;
  bool operator < (const Person& rhs) const { return age < rhs.age; }
  bool operator > (const Person& rhs) const { return age > rhs.age; }
};
int main() {
    set<int> Set1 = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    cout << "Set1: " << endl;
    for (const auto& e: Set1) {
        cout << e << endl;
    }
    cout << endl;
    // Complicate data type
    set<Person> Set2 = {
        {65, "Peter"}, {57, "Irene"}, {33, "Jessica"}, {30, "Jason"},
        {28, "Jasmine"}, {22, "Jonathan"}
    };
    cout << "Set2: " << endl;
    for (const auto& e: Set2) {
        cout << e.age << " " << e.name << endl;
    }
        // Complicate data type
    set<Person, std::greater<Person>> Set3 = {
        {65, "Peter"}, {57, "Irene"}, {33, "Jessica"}, {30, "Jason"},
        {28, "Jasmine"}, {22, "Jonathan"}
    };
    cout << endl << "Set3: " << endl;
    for (const auto& e: Set3) {
        cout << e.age << " " << e.name << endl;
    }

    set<Person, std::less<Person>> Set5 = {
        {65, "Peter"}, {57, "Irene"}, {33, "Jessica"}, {30, "Jason"},
        {28, "Jasmine"}, {22, "Jonathan"}
    };
    cout << endl << "Set5: " << endl;
    for (const auto& e: Set5) {
        cout << e.age << " " << e.name << endl;
    }
    return 0;
}
