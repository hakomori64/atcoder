#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    cout << count(s.begin(), s.end(), 'A') << " ";
    cout << count(s.begin(), s.end(), 'B') << " ";
    cout << count(s.begin(), s.end(), 'C') << " ";
    cout << count(s.begin(), s.end(), 'D') << " ";
    cout << count(s.begin(), s.end(), 'E') << " ";
    cout << count(s.begin(), s.end(), 'F') << endl;
}
