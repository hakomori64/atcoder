#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int r_count = 0;
    for (int i = 0; i < 12; i++) {
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), 'r')) r_count++;
    }
    cout << r_count << endl;
    return 0;
}
