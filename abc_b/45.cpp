#include <iostream>
#include <map>
using namespace std;


int main() {
    string sA, sB, sC;
    cin >> sA >> sB >> sC;
    map<char, string> mp;
    mp['a'] = sA;
    mp['b'] = sB;
    mp['c'] = sC;

    char now = 'a';
    while (mp[now].size()) {
        char flont_char = mp[now].front();
        mp[now].erase(mp[now].begin());
        now = flont_char;
    }
    
    if (now == 'a') cout << 'A' << endl;
    else if (now == 'b') cout << 'B' << endl;
    else cout << 'C' << endl;
    return 0;
}
