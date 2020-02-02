#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<string> vec{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string s;
    cin >> s;

    //cout << 7 - distance(vec.begin(), find(vec.begin(), vec.end(), s)) << endl;
    cout << 7 - (find(vec.begin(), vec.end(), s) - vec.begin()) << endl;
    return 0;
} 


