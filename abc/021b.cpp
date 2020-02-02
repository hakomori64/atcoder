#include <iostream>
#include <set>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    set<int> town_kind;
    int a, b;
    cin >> a >> b;
    town_kind.insert(a);
    town_kind.insert(b);

    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int node;
        cin >> node;
        town_kind.insert(node);
    }

    if (town_kind.size() == k + 2) {
        cout << "YES" << endl;
    } else cout << "NO" << endl;

    return 0;

}
