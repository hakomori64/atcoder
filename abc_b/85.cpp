#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec.at(i);
    set<int> st(vec.begin(), vec.end());
    cout << st.size() << endl;
    return 0;
}
