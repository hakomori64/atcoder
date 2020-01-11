#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main() {
    vector<int> vec(5);
    for (int i = 0; i < 5; i++) {
        cin >> vec.at(i);
    }

    int min_num = 10;
    int index = 0;
    for (int i = 0; i < 5; i++) {
        int num = vec.at(i) % 10;
        if (num != 0 && num < min_num) {
            min_num = num;
            index = i;
        }
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (i == index) continue;
        sum += vec.at(i);
        if (sum % 10 != 0) sum += 10 - (sum % 10);
    }
    sum += vec.at(index);
    cout << sum << endl;
    return 0;
}
