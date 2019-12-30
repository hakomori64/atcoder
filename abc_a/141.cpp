#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> weather{"Sunny", "Cloudy", "Rainy"};
    string s;
    cin >> s;
    int idx = find(weather.begin(), weather.end(), s) - weather.begin();
    cout << weather.at((idx + 1) % 3) << endl;
    return 0;
}
