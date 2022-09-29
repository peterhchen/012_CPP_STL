#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::vector<vector<int>> Tree;
    int edge, n1, n2;
    cout << "edge: ";
    cin >> edge;  // 6
    Tree.resize(edge);

    for (int i = 0; i < edge; i++) {
        cout << "n1: "; cin >> n1; cout << "n2: "; cin >> n2;
                    // edge 1: 1                        2
                    // edge 2: 1                        3
                    // edge 3: 2                        4
                    // edge 4: 2                        5
                    // edge 5: 3                        6
                    // edge 6: 3                        8
        Tree[n1].push_back(n2);
    }
    for (const auto & e1 : Tree) {
        for (const auto & e2: e1) {
            cout << "e2: " << e2 << " ";
        }
        cout << endl;
    }
    return 0;
}
