#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i+=2) {
        string s_odd = "RUD";
        if (count(s_odd.begin(), s_odd.end(), s.at(i)) == 0) {
            cout << "No" << endl;
            return 0;
        }
    }


    for (int i = 1; i < s.size(); i+=2) {
        string s_even = "LUD";
        if (count(s_even.begin(), s_even.end(), s.at(i)) == 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
