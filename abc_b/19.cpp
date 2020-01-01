#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;
    string new_str;
    char current_str;
    int count = 1;

    current_str = s.at(0);
    for (int i = 1; i < s.size(); i++) {
        if (current_str == s.at(i)) {
            count++;
            continue;
        } else {
            new_str += current_str + to_string(count);
            current_str = s.at(i);
            count = 1;
        }
    }
    new_str += current_str + to_string(count);
    cout << new_str << endl;
    return 0;
}
