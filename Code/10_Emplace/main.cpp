// TOPIC: Emplace in STL
// emplace means "to put into position".

// 1. All the containers support insert and emplace operator to store data.
// 2. Emplace is used to construct object in-place and avoids unnecessary copy of objects.
// 3. Insert and Emplace are equal for preemptive data types but when we deal with heavv objects,
//    we should use emplace for better performance.

#include <iostream>
#include <set>
using namespace std;

class A {
  public:
    int x;
    A(int x = 0): x{x} { cout << "Construct " << endl; };
    A(const A& rhs) { x = rhs.x; cout << "Copy" << endl; }
};

bool operator < (const A& lhs, const A& rhs)  { return lhs.x < rhs.x; }
int main() {
    set<A> Set;
    Set.insert(A(1));
    // "Construct"
    // "Copy"
    cout << "e1:" << endl;
    for (auto& e1: Set) {
        cout << e1.x;
    }
    cout << endl << endl;
    Set.emplace(2);
    // "Construct"
    cout << "e2:" << endl;
    for (auto& e2: Set) {
        cout << e2.x;
    }
    cout << endl;
    return 0;
}
