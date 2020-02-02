#include <iostream>
using namespace std;


int main() {
    string s;
    cin >> s;
    
    while (true) {
        if (s.size() >= 2 && s.substr(s.size()-2, 2) == "ch") s = s.substr(0, s.size()-2);
        else if (s.size() >= 1) {
            if (s.at(s.size()-1) == 'o' || s.at(s.size()-1) == 'k' || s.at(s.size()-1) == 'u') s = s.substr(0, s.size()-1);
            else {
                cout << "NO" << endl;
                return 0;
            }
        } else {
            cout << "YES" << endl;
            return 0;
        }
    }
}
