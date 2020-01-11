#include <iostream>
#include <string>
#include <cmath>
#include <climits>
using namespace std;


int main() {
    string s;
    cin >> s;
    int min_diff = INT_MAX;
    for (int i = 0; i < s.size() - 2; i++) {
        int num = stoi(s.substr(i, 3)); 
        int diff = abs(num - 753);
        if (diff < min_diff) {
            min_diff = diff;
        }   
    }
    cout << min_diff << endl;
    return 0;
}
