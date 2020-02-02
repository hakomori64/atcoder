#include <iostream>
using namespace std;


int main() {
    string s;
    cin >> s;
    string out;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'B') { if (out.size() > 0)out.pop_back(); }
        else out.push_back(s.at(i));
    }
    cout << out << endl;
    return 0;
}
