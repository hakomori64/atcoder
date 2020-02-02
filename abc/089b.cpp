#include <iostream>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    set<char> st;
    for (int i = 0; i < n; i++) {
        char drop;
        cin >> drop;
        st.insert(drop);
    }

    if (st.size() == 3) cout << "Three" << endl;
    else cout << "Four" << endl;
    return 0;
}
