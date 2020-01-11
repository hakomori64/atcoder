#include <iostream>
using namespace std;


int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s.at(i) != s.at(s.size()-i-1)) count++;
    }

    cout << count << endl;
    return 0;
}
