#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> st;
    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        st.insert(num);
    }
    cout << st.size() << endl;
    return 0;
}
