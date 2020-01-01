#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<string> vec(4, "....");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> vec.at(i).at(j);
        }
    }

    vector<string> new_vec(4, ". . . .");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            new_vec.at(i).at(j * 2) = vec.at(3-i).at(3-j);
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << new_vec.at(i) << endl;
    }
    return 0;
}
