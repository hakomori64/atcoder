#include <iostream>
#include <vector>
using namespace std;


int main() {
    string s;
    cin >> s;
    vector<int> vec(26, 0);
    for (int i = 0; i < s.size(); i++) {
        vec.at(s.at(i) - 'a')++;
    }

    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i) % 2 == 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
