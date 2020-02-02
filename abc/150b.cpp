#include <iostream>
using namespace std;


int main() {
    int count = 0;
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n-2; i++) {
        if (s.substr(i, 3) == "ABC") count++;
    }
    cout << count << endl;
    return 0;
}
