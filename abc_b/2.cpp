#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    cout << s << endl;
    return 0;
}
