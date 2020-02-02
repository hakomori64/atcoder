#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if ((vec.at(i-1) > vec.at(i) && vec.at(i) > vec.at(i+1)) || (vec.at(i-1) < vec.at(i) && vec.at(i) < vec.at(i+1))) count++;
    }
    cout << count << endl;
    return 0;
}
