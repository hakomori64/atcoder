#include <iostream>
using namespace std;


int main() {
    int max_sum = 0;
    int current_sum = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'I') current_sum++;
        else current_sum--;
        if (current_sum > max_sum) max_sum = current_sum;
    }
    cout << max_sum << endl;
    return 0;
}
