#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    for (int i = 1; i < n; i++) {
        if (vec.at(i).at(0) != vec.at(i-1).at(vec.at(i-1).size()-1)) {
            cout << "No" << endl;
            return 0;
        }

        for (int j = 0; j < i; j++) {
            if (vec.at(i) == vec.at(j)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
        
    cout << "Yes" << endl;
    return 0;
}
