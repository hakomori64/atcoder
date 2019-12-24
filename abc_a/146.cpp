#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<string> vec{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string s;
    cin >> s;
    auto it = find(vec.begin(), vec.end(), s);
    cout << 7 - distance(vec.begin(), it) << endl;
    return 0;
} 
