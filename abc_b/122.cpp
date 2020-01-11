#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    string agct = "AGCT";
    int max_len = 0;
    int current_len = 0;
    for (int i = 0; i < s.size(); i++) {
        if (count(agct.begin(), agct.end(), s.at(i)) == 0) {
            if (current_len > max_len) max_len = current_len;
            current_len = 0;
            continue;
        } else {
            current_len++;
        }
    }

    if (current_len > max_len) max_len = current_len;
    cout << max_len << endl;
    return 0;
}
