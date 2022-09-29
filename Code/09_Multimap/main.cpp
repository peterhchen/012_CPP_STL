// TOPIC: Multimap In C++
// SYNTAX: multimap<T1, T2> obj: where T1 is key type and T2 is value type.
// NOTES:
// 1. Multimap is an associate container that contains a sorted list of key-value pairs.
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted order on the basis of key (ascending/descending).
//    Syntax: std::multimap<char, int , std::greater<>> Multimap;
// 3. Data Structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound.
// 5. We do not have at() and [] functions to get element like we had in std::map.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    multimap<string, int> Multimap1;
    Multimap1.insert(make_pair("Peter", 65));
    Multimap1.insert(make_pair("Peter", 12345));
    Multimap1.insert(make_pair("Peter", 56789));
    Multimap1.insert(make_pair("Irene", 57));
    Multimap1.insert(make_pair("Irene", 13579));

    cout << "e1:" << endl;
    // Iterate over multimap
    for (const auto &e1: Multimap1) {
        cout << e1.first << " " << e1.second << endl;
    }
    cout << endl;
    // Get all the pairs of given key

    //pair<multimap<string,int>::iterator, multimap<string, int>::iterator> range \
    //= Multimap1.equal_range("Peter");
    //"pair<multimap<string,int>::iterator, multimap<string, int>::iterator>"
    // is same as "auto"
    auto range = Multimap1.equal_range("Peter");
    for (auto it = range.first; it != range.second; it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << "Multimap1.count('Peter')"<< endl;
    cout << Multimap1.count("Peter") << endl << endl;
    //cout << "Multimap1.lower_bound('Peter')"<< endl;
    //cout << Multimap1.lower_bound("Peter") << endl << endl;

    multimap<string, int, greater<string>> Multimap2;
    Multimap2.insert(make_pair("Peter", 65));
    Multimap2.insert(make_pair("Peter", 12345));
    Multimap2.insert(make_pair("Peter", 56789));
    Multimap2.insert(make_pair("Irene", 57));
    Multimap2.insert(make_pair("Irene", 13579));

    cout << "e2:" << endl;
    // Iterate over multimap
    for (const auto &e2: Multimap2) {
        cout << e2.first << " " << e2.second << endl;
    }
    cout << endl;
    return 0;
}
